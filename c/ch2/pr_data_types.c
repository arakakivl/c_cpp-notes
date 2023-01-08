#include <stdio.h>

int main() {
	char c = 'A';

	printf("char as %%c: %c\n", c);
	printf("char as %%d: %d\n", c);

	int i = 10;
	printf("int as %%d: %d\n", i);

	short sh = -2;
	printf("short as %%d: %d\n", sh);

	long l = 10000000;
	printf("long as %%ld: %ld\n", l);

	float f = 4.0f;
	printf("float as %%f: %f\n", f);

	double d = 4.000002;
	printf("double as %%lf: %lf\n", d);

	long double lf = 4.00000000000332;
	printf("long double as %%Lf: %Lf\n", lf);

	// Also, signed and unsigned values are present.
	// Then, if a char c is specified as signed char, its value ranges from -128 -> 127.
	// if unsigned, its value ranges from 0 -> 255.
}
