#include <stdio.h>

int main()
{
	/*
	for(int c = getchar(); c != EOF; c = getchar())
	{
		printf("You said: ");
		putchar(c);
	}
	*/

	int c;
	while ((c = getchar()) != EOF)
	{
		printf("You said: ");
		putchar(c);

		printf("\n");
	}
}

/*

Since c must be big enough to hold EOF in addition to any possible char!
EOF is an integer defined on stdio.h

*/
