#include <stdio.h>

// Returns the position of the finded 'c' in string 'str'.
int fin(char str[], char c);

// Deletes all occurrences of chars in 'tor' that are in 'arr'.
void rmfrom(char arr[], char tor[]);

int main(void) {
	char str[] = "Heello, world!";
	char tor[] = "He,dllo!rw";

	printf("Before: %s\n", str);
	rmfrom(str, tor);

	printf("After: %s\n", str);
	return 0;
}

int fin(char str[], char c) {
	for(int i = 0; str[i] != '\0'; ++i)
		if (str[i] == c)
			return i;

	return -1;
}

void rmfrom(char arr[], char tor[]) {
	for(int i = 0; tor[i] != '\0'; ++i) {
		int in = fin(arr, tor[i]);
		if (in >= 0) {
			while(arr[in] != '\0') {
				arr[in] = arr[in + 1];
				++in;
			}

			--i;
		}
	}
}
