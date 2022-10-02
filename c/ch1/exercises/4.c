#include <stdio.h>

int main()
{
	float start = 0, final = 300, step = 20;
	printf("Celsius\tFarenheint\n");

	while(start <= 300) {
		printf("%6.1f\t%3.2f\n", start, ((9.0/5.0) * start) + 32);
		start += step;
	}
}
