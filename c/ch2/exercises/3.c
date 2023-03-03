#include <stdio.h>
#include <limits.h>

int strlen(char s[]);
int sanitizehexstr(char s[]);

int ishex(char c);
int modpow(int n, int b);

int htoi(char h[]);

int main(void) {
	printf("Converting the hexadecimal 000x4A0F into integer...\n");

	char hex[100] = "00000x4A0F";
	int converted = htoi(hex);

	if (converted < 0) {
		printf("There is some inconsistence in your hex string. Review it and try again.\n");
		return 1;
	}

	printf("The result is %d!\n", converted);
	return 0;
}

int strlen(char s[]) {
	int l = 0;
	for(l = 0; s[l] != '\0' && s[l] != '\n';)
		++l;

	return l;
}

int sanitizehexstr(char s[]) {
	int m = 0;
	if (s[0] == '0') {
		for(int i = 0, j = strlen(s); i < strlen(s); ++i) {
			--j;
			if (s[i - 1] == '0' && (s[i] == 'x' || s[i] == 'X')) {
				m = j;
				break;
			}
		}
	}

	return m;
}

int ishex(char c) {
	if (c > 'f' || (c > 'F' && c < 'a') || c < '0' || (c > '9' && c < 'A'))
		return 0;

	return 1;
}

int modpow(int n, int b) {
	if (n < 0)
		n = ((UINT_MAX << 1) ^ n);

	if (b < 0)
		b = ((UINT_MAX << 1) ^ b);

	float toReturn = 1;
	for(int i = 0; i < b; ++i)
			toReturn *= n;

	return toReturn;
}

int htoi(char h[]) {
	int n = 0;

	int l = strlen(h);
	int m = sanitizehexstr(h);

	// Converting
	for(int i = l, j = 0; i > l - m; --i) {
		printf("Char is %c, int is %d\n", h[i - 1], l - i);

		if (!ishex(h[i - 1])) {
			printf("AA\n");
			return -1;
		}

		if (h[i - 1] <= '9')
			n += (h[i - 1] - '0') * modpow(16, l - i);
		else if (h[i - 1] >= 'a')
			n += ((h[i - 1] - ('a' - 10))) * modpow(16, l - i);
		else
			n += ((h[i - 1] - ('A' - 10))) * modpow(16, l - i);
	}

	return n;
}
