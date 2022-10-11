#include <stdio.h>
#include "utilities.h"

#define MAX 1000
#define LEN 80

int main() {
	char line[MAX];
	int len = 0;

	while((len = get_line(line, MAX)) > 0) {
		if (len > 80)
			out_line(line);
	}
}
