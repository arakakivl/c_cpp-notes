#include <stdio.h>

/* Why (x &= x - 1) deletes x's rightmost 1-bit? */
// Because the rightmost 1-bit in x represents the next bit to be removed in a subtraction operation.

// In fbitcount function, we need less iterations than in bitcount.
// 54 & 53 = 110110 & 110101 == 110100 (1)
// 52 & 51 = 110100 & 110011 == 110000 (2)
// 48 & 47 = 110000 & 101111 == 100000 (3)
// 32 & 31 = 100000 & 011111 == 000000 (4)

int bitcount(unsigned int x);

// Faster than bitcount
int fbitcount(unsigned int x);

int main(void) {
	printf("bitcount(%d) == %d\n", 240255, bitcount(240255));
	printf("fbitcount(%d) == %d\n", 240255, fbitcount(240255));

	return 0;
}

int bitcount(unsigned int x) {
	int bits;
	for(bits = 0; x != 0; x >>= 1)
		if (x & 1 == 1) ++bits;

	return bits;
}

int fbitcount(unsigned int x) {
	int bits;
	for(bits = 0; x != 0; x &= x - 1)
		++bits;
	
	return bits;
}