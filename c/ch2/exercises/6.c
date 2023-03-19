#include <stdio.h>

/* ALGORITHM */
/*
1. Sets to 0 all bits in 'x' that will be replaced by rightmost 'n' bits of 'y'. It'll produce a result 'a'.
2. Sets to 0 all bits in 'y' that won't be used as replacement for 'n' bits in 'x', beginning at position 'p'. It'll produce a result 'b'.
3. Apply left-shift operator 'p - n + 1' times in 'b'. This will produce a result 'c', that will let all replacement bits of 'b' in the same position at replaced bits in 'x'.
4. Apply OR binary operator between 'a' and 'c'. The result is what we're gonna output.
*/

unsigned int setbits(unsigned int x, int p, int n, unsigned int y);
int main(void) {
    printf("setbits(181, 4, 2, 155) == %d\n", setbits(181, 4, 2, 155));
    return 0;
}

unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    unsigned int k = p - n + 1;
    unsigned int j = ~(~0 << n);
    
    return (~(j << k) & x) | ((y & j) << k);
}