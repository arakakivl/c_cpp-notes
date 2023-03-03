#include <stdio.h>

int main(void) {
	int i = 0;
	for(int j = 0, i = 0; i < 50; ++j)
		++i;

	printf("i is %d\n", i);

	return 0;
}
