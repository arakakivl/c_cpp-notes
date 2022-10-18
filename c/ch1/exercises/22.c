#include <stdio.h>

#define LINE_BREAK 50

int is_blank(int c);
void clear();
void out_arr(char arr[], int size);

char line[LINE_BREAK];
int pos = 0, non_blank_pos = 0;

int main() {
	extern char line[];
	extern int pos, non_blank_pos;

	for(int c = getchar(); c != EOF; c = getchar()) {
		if (pos == LINE_BREAK - 1) {
			if (is_blank(c)) {
				out_arr(line, non_blank_pos + 1);
			} else {
				line[pos] = c;
				out_arr(line, pos + 1);
			}

			clear();
		} else {
			if (c == '\n') {
				out_arr(line, pos);
				clear();

				continue;
			}

			non_blank_pos = pos;

			line[pos] = c;
			++pos;
		}
	}
}

int is_blank(int c) {
	if (c == '\t' || c == '\n' || c == ' ')
		return 1;

	return 0;
}

void clear() {
	extern char line[];
	extern int pos, non_blank_pos;

	for(int i = 0; i < LINE_BREAK; ++i)
		line[i] = '\0';

	pos = non_blank_pos = 0;
}

void out_arr(char arr[], int size) {
	for(int i = 0; i < size; ++i)
		putchar(arr[i]);

	printf("\n");
}
