#include <stdio.h>

// Oh, they are so cool. I've been waiting a lot for re-studying this operators!
// (ya, I forgot how they work)

int main() {
	// They're only applied to integral operands, that is, char, short, int and long.
	int a, b, c;
	a = b = c = 0;

	// & AND
	a = 0155;  // or 0x1101101
	b = 0143;  // or 0x1100011
	c = a & b; // or 0x1100001

	// | inclusive OR
	a = 0x32A; // or 0x1100101010
	b = 0xF2;  // or 0x0011110010
	c = a | b; // or 0x1111111010

	// ^ exclusive OR
	a = 0233;   // or 0x0000010011011
	b = 0x192A; // or 0x1100100101010
	c = a ^ b; // or  0x0011001001110

	// << left shift
	a = 500; // or 111110100;

	// same as: append two zero into 111110100, or multiply 500 by ({2} * 2).
	int aa = a << 2; // or 11111010000
	printf("Value of aa: %d\n", aa);

	// right shift
	b = 66; // or 1000010;

	// same as: remove one bit from 1000010, or divide 66 by (1 * 2).
	int bb = b >> 1; // or 100001;
	printf("Value of bb: %d\n", bb);

	// ~ one's complement (unary)
	a = 48; // or 0x110000;
	c = ~a; // or 0x001111;

	return 0;
}
