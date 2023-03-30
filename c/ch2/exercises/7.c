#include <stdio.h>

unsigned int invert(unsigned int x, int p, int n);
int main(void) {
	printf("invert(248, 7, 1) == %d\n", invert(248, 8, 8));
	return 0;
}

unsigned int invert(unsigned int x, int p, int n) {
	int k = p + 1 - n;
	int j = ~(~(~0 << n) << p - n);

	return (x & j) | (~x & ~j);
}
