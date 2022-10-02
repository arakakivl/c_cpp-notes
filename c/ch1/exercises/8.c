#include <stdio.h>

int main()
{
	int b = 0, l = 0, t = 0;
	for(int c = getchar(); c != EOF; c = getchar()) {
		if (c == ' ')
			++b;
		else if (c == '\n')
			++l;
		else if (c == '\t')
			++t;
	}

	printf("Number of blanks: %d\nNumber of lines: %d\nNumber of tabs: %d\n", b, l, t);
}
