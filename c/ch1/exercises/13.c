#include <stdio.h>

int getlength(char word[]);
void print_bar(int length);
void print_column(int length);

#define IN 1
#define OUT 0

int main()
{
	for(int c = getchar(), i = 0, state = OUT, l = 0; c != EOF; c = getchar()) {
		if (c == '\n' || c == '\t' || c == ' ') {
			state = OUT;

			printf("Input #%d ", i + 1);
			print_bar(l);
			printf(" %d\n", l);

			++i;
			l = 0;
		} else {
			state = IN;
			++l;
		}
	}
}

int getlength(char word[]) {
	int l = 0;
	for(int i = 0; word[i] != '\n' && word[i] != '\t' && word[i] != '\0'; ++i) {
		++l;
	}

	return l;
}

void print_bar(int length) {
	for(int i = 0; i < length; ++i)
		printf("=");
}

void print_column(int length) {
	for(int i = 0; i < length; ++i) {
		printf("||\n");
	}
}
