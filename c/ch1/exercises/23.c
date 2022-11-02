#include <stdio.h>

int main() {
	for(int c = getchar(), is_multi = 0, is_comment = 0, last_c = 0, r_commented = 0; c != EOF; c = getchar()) {
		if (is_comment) {
			if ((c == '\n' && !is_multi) || (c == '/' && last_c == '*' && is_multi)) {
				is_comment = 0;
				is_multi = 0;

				r_commented = 1;
				last_c = '\0';
			} else {
				last_c = c;
			}
		} else {
			if (last_c == '/' && (c == '*' || c == '/')) {
				if (c == '*')
					is_multi = 1;

				is_comment = 1;
				last_c = '\0';
				
			} else if (r_commented && c == '\n') {
				continue;
			} else {
				if (c != '/') {
					if (last_c == '/')
						putchar(last_c);

					putchar(c);
					r_commented = 0;
				}

				last_c = c;
			}
		}
	}
}
