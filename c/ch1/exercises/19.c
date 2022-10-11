#include <stdio.h>
#include "utilities.h>

#define MAX 1000

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





