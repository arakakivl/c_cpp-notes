#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF) {
		++nc;

		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			printf("\n");
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}

		if (state == IN) {
			putchar(c);
		}
	}

	printf("Lines: %d\nWords: %d\nCharacters: %d\n", nl , nw, nc);
}
