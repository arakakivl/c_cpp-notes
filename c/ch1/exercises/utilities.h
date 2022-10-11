#include <stdio.h>

int get_line(char arr[], int max) {
	int l = 0;
	for(int c = getchar(); c != EOF && l < max; c = getchar()) {
		if(c == EOF)
			return EOF;
		else if (c == '\n') {
			arr[l] = c;
			break;
		}
		else if (l == max - 1) {
			arr[l] = '\n';
			break;
		}

		arr[l] = c;
		++l;
	}

	return l;
}

void out_line(char line[]) {
	for(int i = 0; line[i] != '\n'; ++i)
		putchar(line[i]);

	printf("\n");
}

