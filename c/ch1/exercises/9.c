#include <stdio.h>

int main()
{
	for(int c = getchar(), i = 0; c != EOF; c = getchar())
		if (c == ' ')
			if (i) {
				i = 0;
			} else {
				i = 1;
				putchar(c);
			}
		else {
			i = 0;
			putchar(c);
		}
}
