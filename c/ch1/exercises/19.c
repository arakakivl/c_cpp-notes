#include <stdio.h>

#define MAX 1000

int get_line(char line[], int max);
void out_line(char line[]);

void reverse_line(char line[]);

int main() {
	char line[MAX];
	int length = 0;

	while((length = get_line(line, MAX)) > 0) {
		reverse_line(line);

		printf("Reversed is: ");
		out_line(line);

		printf("\n");
	}
}

int get_line(char line[], int max) {
	int l = 0;
	for(int c = getchar(); c != EOF && l < max; c = getchar()) {
		if(c == '\n') {
			line[l] = c;
			break;
		} else if (c == EOF) {
			return EOF;
		} else if (l == max - 1) {
			line[l] = '\n';
			break;
		}

		line[l] = c;
		++l;
	}

	return l;
}

void out_line(char line[]) {
	for(int i = 0; line[i] != '\n'; ++i)
		putchar(line[i]);

	printf("\n");
}

void reverse_line(char line[]) {
	// getting line length
	int length = 0;
	for(int i = 0; line[i] != '\n'; ++i)
		++length;

	// creating another array
	char original[length];
	for(int i = 0; i < length; ++i)
		original[i] = line[i];

	// reversing
	for(int i = 0, j = 1; i < length; ++i) {
		line[i] = original[length - j];
		++j;
	}

	line[length] = '\n';
}





