#include <stdio.h>

int arrlen(char a[]);

void copyarr(char a[], char b[], int sizeofb);
void swiparr(char a[], char b);

int main(void) {
	char a[] = { 'a', 'b', '\0' };
	char b[sizeof(a) / sizeof(a[0])];

	copyarr(a, b, sizeof(b) / sizeof(b[0]));
	swiparr(b, 'b');

	printf("A: %s\nB: %s\n", a, b);
	return 0;
}

int arrlen(char a[]) {
	int i;
	for(i = 0; a[i] != '\0'; ++i);

	return i;
}

void swiparr(char a[], char b) {
	for(int i = 0; i < arrlen(a); ++i) {
		if (a[i] == b) {
			for(int j = i; j < arrlen(a); ++j) {
				a[j] = a[j + 1];
			}

			--i;
		}
	}
}

void copyarr(char a[], char b[], int sizeofb) {
	int i;
	for(i = 0; i < sizeofb - 1; ++i) {
		b[i] = a[i];
	}

	b[i] = '\0';
}
