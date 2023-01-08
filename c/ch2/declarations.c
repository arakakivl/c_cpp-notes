#include <stdio.h>

// We can also apply the const qualifier to specify that the function will not change the array argument
int sstrlen(const char a[]);

int main() {
	// const qualifier specifies that the variable's value will not be changed.
	const double pi = 3.14;
	const char msg[] = "Hello, world!";

	return 0;
}

int sstrlen(const char a[]) {
	int i = 0;
	while(a[i] != '\0')
		++i;

	return i;
}
