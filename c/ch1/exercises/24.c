#include <stdio.h>

int is_letter(int c) {
	for(int i = 65; i != 91; ++i)
		if (c == i || c == (i + 32))
			return 1;

	return 0;
}

int main() {
	int n_pr, n_cr, n_kr;
	int n_pl, n_cl, n_kl;

	int n_sq, n_dq;

	int still_q, still_mlc;
	int u;

	n_pr = n_cr = n_kr = 0;
	n_pl = n_cl = n_kl = 0;

	n_sq = n_dq = 0;

	still_q = still_mlc = 0;
	u = 0;

	for(int c = getchar(), p_c = 0, is_comment = 0, is_sq = 0; c != EOF; c = getchar()) {
		// If we're between quotes
		if (still_q) {
			// Verify if character is unscaped.
			// Try to close quotes.
			if (((c == '\'' && is_sq) || (c == '\"' && !is_sq)) && p_c != '\\') {
				if (is_sq)
					++n_sq;
				else
					++n_dq;

				is_sq = 0;
				still_q = 0;

				p_c = '\0';
			} else {
				if (is_sq && (p_c == '/' && (c == '/' || c == '*'))) {
					++u;
					is_comment = 1;

					is_sq = 0;
					still_q = 0;
				
					p_c = '\0';
				} else if (is_sq && (c != '\'' && p_c != '\\'))
					++u;
			}
		} else if (is_comment) {
			// Try to close comments.
			if ((c == '\n' && !still_mlc) || (p_c == '*' && c == '/' && still_mlc)) {
				if (still_mlc)
					still_mlc = 0;

				is_comment = 0;
				p_c = '\0';

				continue;
			}

			p_c = c;
		} else {
			// Verify if we're going to quotes.
			// If we're going to comments
			if ((c == '\'' || c == '\"') && p_c != '\\')  {
				if (c == '\'') {
					++n_sq;
					is_sq = 1;
				} else
					++n_dq;

				still_q = 1;
				p_c = '\0';
			} else if ((c == '*' || c == '/') && p_c == '/' ) {
				if (c == '*')
					still_mlc = 1;

				is_comment = 1;
				p_c = '\0';
			} else {
				// Boring part
				if (c == '(')
					++n_pl;
				else if (c == ')')
					++n_pr;
				else if (c == '[')
					++n_cl;
				else if (c == ']')
					++n_cr;
				else if (c == '{')
					++n_kl;
				else if (c == '}')
					++n_kr;

				p_c = c;
			}
		}
	}

	if (n_pr != n_pl)
		printf("Some ( or ) are not matched.\n");
	if (n_cr != n_cl)
		printf("Some [ or ] are not matched.\n");
	if (n_kr != n_kl)
		printf("Some { or } are not matched.\n");
	if (n_sq % 2 != 0 || n_dq % 2 != 0)
		printf("Neither \" nor \' are matched.\n");
	if (still_mlc)
		printf("Multi line comment not properly finished.\n");
	if (u > 0)
		printf("Unscaped characters!\n");
}
