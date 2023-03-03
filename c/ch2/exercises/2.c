#include <stdio.h>

short int get_line(char s[], short int lim);

int main(void) {
	short int lim = 100;
	char s[lim];

	short int length = get_line(s, lim);

	printf("Input was: %s\n", s);
	printf("Length is %d\n", length);

	return 0;
}

short int get_line(char s[], short int lim) {
	short int i = 0;

	// As the final character (s[lim - 1]) must be '\0', then (i < lim - 1).
	for(short int c = getchar(); c != EOF; ++i) {
		s[i] = c;

		// Break line
		if (c == '\n') {
			++i;
			break;
			
		// Last char
		} else if (i == lim - 1) {
			break;
		}

		c = getchar();
	}

	s[i] = '\0';
	return i;
}
