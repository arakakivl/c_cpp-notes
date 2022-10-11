#include <stdio.h>
#include "utilities.h"

#define MAX 1000

void rm_tabs(char arr[], int length);
void rm_trailing(char arr[], int length);

void transform(char arr[], int length);

int is_blank_line(char arr[]);

int main() {
	char line[MAX];
	int length = 0;

	while((length = get_line(line, MAX)) > 0) {
		if (is_blank_line(line) != 1) {
			transform(line, length);

			printf("The result is:\n");
			out_line(line);
		}
	}
}

void rm_tabs(char arr[], int length) {
	for(int i = 0; i < length; ++i)
		while(arr[i] == '\t')
			for(int j = i; j < length + 1; ++j)
				arr[j] = arr[j + 1];

}

void rm_trailing(char arr[], int length) {
	for(int i = 0; i < length; ++i)
		while(arr[i] == ' ' && arr[i + 1] == arr[i])
			for(int j = i; j < length + 1; ++j)
				arr[j] = arr[j + 1];
}

void transform(char arr[], int length) {
	rm_tabs(arr, length);
	rm_trailing(arr, length);
}

int is_blank_line(char arr[]) {
	for(int i = 0; arr[i] != '\n'; ++i)
		if (arr[i] != ' ' && arr[i] != '\n' && arr[i] != '\t')
			return 0;

	return 1;
}
