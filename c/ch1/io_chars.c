#include <stdio.h>

int main()
{
	// getchar
	int c;
	printf("Press some key.\n");

	c = getchar();

	//putchar
	printf("The pressed key was ");
	putchar(c);

	printf("\n");
}

/*

int getchar(void) => Get char read from user's input. int, unsigned char cast or EOF.
int putchar(char c) => Output char c. int, unsigned char cast or EOF.

*/
