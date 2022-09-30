#include <stdio.h>

int power(int b, int n);

int main()
{
	printf("Base 2, number 3: %d\n", power(2, 3));
}

int power(int b, int n) {
	int i = 1, p = 1;
	for(; i <= n; ++i)
		p *= b;

	return p;
}
