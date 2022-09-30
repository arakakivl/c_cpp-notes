#include <stdio.h>

int main()
{
	int c, l;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++l;
		}
	}

	printf("%d\n", l);
}
