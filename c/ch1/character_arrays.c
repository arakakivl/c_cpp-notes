#include <stdio.h>

#define MAXLINE 1000

int get_line(char arr[], int max);
void copy_array(char arr1[], char arr2[]);

int main() {
	char line[MAXLINE];
	char longest[MAXLINE];

	int l, aux;
	l = aux = 0;

	while ((l = get_line(line, MAXLINE)) > 0)
		if (l > aux) {
			copy_array(line, longest);
			aux = l;
		}


	printf("Number of characters: %d. Texto: %s\n", aux, longest);
}

int get_line(char arr[], int max) {
	int n = 0, i = 0;
	for(char c = getchar(); i < max - 1; c = getchar()) {
		if (c == EOF)
			return n;
		else if (c == '\n') {
			arr[i] = '\0';
			return n;
		}
		else {
			arr[i] = c;
			++n;
		}

		++i;
	}

	arr[i] = '\0';

	return n + 1;
}

void copy_array(char arr1[], char arr2[]) {
	for(int i = 0; arr1[i] != '\0'; ++i) {
		arr2[i] = arr1[i];
	}
}
