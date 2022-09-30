#include <stdio.h>

int main(void) {
	// Declaring some variables
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;

	// Assigning values to array items
	for(i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	// Getting characters
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c - '0'];
		} else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}

	printf("Digits:\n 0  1  2  3  4  5  6  7  8  9\n");
	for(i = 0; i < 10; ++i) {
		printf("%2d ", ndigit[i]);
	}

	printf("\nWhite space = %d, other = %d\n", nwhite, nother);
}
