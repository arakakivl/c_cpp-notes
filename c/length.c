#include <stdio.h>

#define IN 1
#define OUT 0

// ola mundo

int main(void) {
	int count = 0;
	for(int c = getchar(), state = OUT; c != EOF; c = getchar()) {
		if (c == ' ' || c == '\n') {
			state = OUT;
		} else {
			if (!state) {
				++count;
			}

			state = IN;
		}
	}

	printf("Number of received words: %d\n", count);
}
