#include <stdio.h>

#define NASCII 128

void print_bar(int n);

int main()
{
	int characters[NASCII];
	for(int i = 0; i < NASCII; ++i) {
		characters[i] = 0;
	}

	for(int c = getchar(); c != EOF; c = getchar()) {
		++characters[c];
	}

	for(int i = 0; i < NASCII; ++i) {
		if (characters[i] > 0) {
			if (i == '\n')
				printf("\'\\n\': ");
			else if (i == '\t')
				printf("\'\\t\': ");
			else
				printf("\'%c\': ", i);

			print_bar(characters[i]);
			printf("\n");
		}
	}

}

void print_bar(int n) {
	for(int i = 0; i < n; ++i)
		printf("=");
}
// A position in the characters array represents an ASCII item.
// Then, position 65 represents 'A'.

// For each inputed character, we increase by one in the respective
// ASCII position in the array.
