#include <stdio.h>

void lower(char str[]);
int main(void) {
    char str[] = "HeLlo, wOrLd!";
    lower(str);
    
    printf("%s\n", str);
    return 0;
}

void lower(char str[]) {
    for(int i = 0; str[i] != '\0'; ++i)
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + ('a' - 'A') : str[i];
}