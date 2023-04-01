#include <stdio.h>

unsigned int rightrot(unsigned int x, unsigned int n);
int main(void) {
	printf("rightrot(53, 3) == %d\n", rightrot(53, 3));
	return 0;
}

unsigned int rightrot(unsigned int x, unsigned int n) {
	return (x >> n) | (x & ~(~0 << n)) << n;
}

// 53 = 110101, 3 == 101110 == 46
