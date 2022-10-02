#include <stdio.h>

int main()
{
	printf("Fahrenheint\tCelsius\n");

	float fahr;
	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3.1f\t\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
