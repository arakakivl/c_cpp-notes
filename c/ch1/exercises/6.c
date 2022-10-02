#include <stdio.h>

int main()
{
	int tf = getchar() != EOF;
	if (tf)
		printf("getchar() != EOF is true (%d)\n", tf);
	else
		printf("getchar() != EOF is false (%d) \n", tf);
}
