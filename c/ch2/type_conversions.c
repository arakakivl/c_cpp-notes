#include <stdio.h>

int atoi(char s[]);
int lower(int c);

int main() {
	// atoi -> converts str into int
	char str[] = "45";
	printf("atoi version in %d\n", atoi(str));

	// lower -> converts upper character into lower
	char k = 'K';
	printf("lower version of K is %c\n", lower(k));

	// In operations, "lower type" are converted into "higher type".
	// For example, int is converted to long and short and char are converted to int.
	// Thus the returned result is of higher type.

	// -1L < 1U ===> As different types, we convert the smallest one into biggest one's type.
	// Then, 1U is converted to signed long. Then, we have something like -1L < 1L;

	// -1L > 1UL ===> As different signed numbers, we convert -1L into unsigned.
	// And thus appears to be a large positive number.
}

int atoi(char s[]) {
	int n = 0;

	for(int i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');

	return n;
}

int lower(int c) {
	if (c >= 'A' && c <= 'Z')
		return c + ('a' -'A');

	return c;
}
