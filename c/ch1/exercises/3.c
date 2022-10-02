#include <stdio.h>

int main()
{
	printf("Farenheint\tCelsius\n");
	for(float step = 20, start = 0, final = 300; start <= 300; start += step) {
		printf("%3.2f\t\t%6.2f\n", start, (start - 32) * (5.0 / 9.0));
	}
}
