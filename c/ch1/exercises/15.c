#include <stdio.h>

float convert_to_celsius(float f);
float convert_to_fahrenheint(float c);

#define START 0.0
#define STEP 20.0
#define FINAL 300.0

int main()
{
	printf("Fahr\tCelsius\n");
	for(float i = START; i <= FINAL; i += STEP)
		printf("%3.1f\t%6.2f\n", i, convert_to_celsius(i));
}

float convert_to_celsius(float f) {
	return (5.0 / 9.0) * (f - 32);
}

float convert_to_fahrenheint(float c) {
	return ((9.0 / 5.0) * c) + 32;
}
