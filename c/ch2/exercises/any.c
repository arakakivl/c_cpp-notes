#include <stdio.h>

int anyin(char in[], char what[]);
int main() {
	printf("If tr is in str, the pos of tr is %d\n", anyin("abrcdaaabrdcabra", "brd"));
}

int anyin(char in[], char what[]) {
	for(int i = 0, j = 0, k = 0; in[i] != '\0'; ++i) {
		k = i;

		while (in[k] == what[j]) {
			if (what[j] == '\0')
				return 1;

			printf("k is %d\n", k);	
			++k;
			++j;
		}
	}

	return 0;
}
