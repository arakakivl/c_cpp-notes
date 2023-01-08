#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	// Based on unix timespamp
	srand(time(0));
	int n = rand();

	printf("Pseudo-random number: %d\n", n);
}
