#include <stdio.h>

#define MAX 1000

int get_line(char line[], int max);
void copy_arr(char arr1[], char arr2[]);

int main() {
    // Some variables
    char actual[MAX], longest[MAX];
    int length = 0, max = 0;

    // Getting line
    while((length = get_line(actual, MAX)) > 0) {
        if (length > max) {
            max = length;

            // If actual[length - 1] != '\0', then there are more characters in the buffer
            if(actual[length - 1] != '\0') {
                for(int c = getchar(); c != '\n'; c = getchar())
                    ++max;

                actual[length - 1] = '\0';
            }

            // Copying array
            copy_arr(actual, longest);
        }
    }

    // Result
    printf("Length of longest line: %d\nLine: %s\n", max, longest);
}

int get_line(char line[], int max) {
    int length = 0;
    for(int c = getchar(); c != '\n'; c = getchar()) {
        if (c == EOF) {
            return EOF;
        } else if (length == max - 1 && c != '\n') {
            line[length++] = c;
            return length;
        } else {
            line[length] = c;
        }

        ++length;
    }

    line[length++] = '\0';
    return length;
}

void copy_arr(char arr1[], char arr2[]) {
    int i = 0;
    for(; arr1[i] != '\0'; ++i) {
        arr2[i] = arr1[i];
    }

    arr2[i] = '\0';
}