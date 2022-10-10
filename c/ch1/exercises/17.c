#include <stdio.h>

#define MAX 1000
#define LEN 80

int get_line(char arr[], int max);

int main() {
	char line[MAX];
	int len = 0;
	
	while((len = get_line(line, MAX)) > 0) {
		if (len >= 80) {
		    printf("%d\n", len);
			output_arr(line);
		}
	}
}

int get_line(char arr[], int max) {
	int l = 0;
	for(int c = getchar(); 1; c = getchar()) {
		if (c == '\n') {
			arr[l] = c;
			break;
		} else if (c == EOF) {
			return EOF;
		} else if (l == max - 1) {
			arr[l] = '\n';
			break;
		}
		
		arr[l] = c;
		++l;
	}
	
	return l;
}

void output_arr(char arr[]) {
	for(int i = 0; arr[i] != '\n'; ++i) {
		putchar(arr[i]);
	}
	
	printf("\n");
}