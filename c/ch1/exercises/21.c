#include <stdio.h>

#define TAB 8

int main() {
	for(int c = getchar(), chars = 0, spaces = 0; c != EOF; c = getchar()) {
		if (c == ' ') {
			++spaces;
		} else if (c == '\n') {
			chars = spaces = 0;
			--chars;

			printf("\n");
		} else {
			if (spaces > 0) {
				int to_consider = chars - spaces;
				int tab_length = TAB - (to_consider % TAB);

				for (int t = tab_length; spaces - t >= 0; t = TAB) {
					spaces -= t;
					putchar('\t');
				}

				for(int i = 0; i < spaces; ++i)
					putchar('$');

				putchar(c);
				spaces = 0;
			} else {
				putchar(c);
			}
		}

		++chars;
	}
}

// Tabs. They count every character precending them to expand for a certain width of blanks.
// Although I used this though on entab program (see 20.c), I didn't notice that I wasn't in this program.
// Takes me a lot of time. Just by one forgotten thought.
