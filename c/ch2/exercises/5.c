// Fun fact (or not): before doing this, I already did something similar before on '4.c' and 'any.c' files!

#include <stdio.h>

// Returns the position of the char 'c' in the string 'str'. if 'c' isn't in 'str', returns -1.
int in(char str[], char c);

// Do the same as above, but priorizing the first char in 'str2' that is in 'str1'.
int any(char str1[], char str2[]);

int main(void) {
	char str1[] = "Hello, world!";
	char str2[] = ",world!";

	int pos = any(str1, str2);
	printf("The first occurrence of char 'c' present in both strings is in the %dº position.\n", pos);

	return 0;
}

int in(char str[], char c) {
	for(int i = 0; str[i] != '\0'; ++i)
		if (str[i] == c)
			return i;

	return -1;
}

int any(char str1[], char str2[]) {
	int l = -1;
	for(int i = 0; str2[i] != '\0'; ++i) {
		int p = in(str1, str2[i]);

		if ((p < l || l == -1) && p >= 0)
			l = p;
	}

	return l;
}
