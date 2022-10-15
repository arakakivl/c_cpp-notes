#include <stdio.h>

#define TAB 8

void put_space(int n);

int main() {
	for(int c = getchar(), l = 0; c != EOF; c = getchar()) {
		if (c != '\t' && c != '\n') {
			putchar(c);
			++l;
		} else {
			if (c == '\t')
				put_space((TAB - (l % TAB)));
			else
				putchar(c);

			l = 0;
		}
	}
}

void put_space(int n) {
	for(int i = 0; i < n; ++i) {
		putchar(' ');
	}
}

// As we can see, a single tab in my terminal equals to eight spaces.
// But, the width of a tab when being preceding by some characters change!

// For ten characters, for example, the width of a tab will be 6.
// For eight characters, for example, the width of a tab will be 8.
// For six characters, for example, the width of a tab will be 2.

// The following pattern is encountered: n_of_spaces = ((tab_length - (length_of_precending_characters % tab_length)))
