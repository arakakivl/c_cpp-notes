#include <stdio.h>
#include <limits.h>

void print_s_type(char type[], signed long minValue, signed long maxValue);
void print_u_type(char type[], unsigned long value);


int main(void) {
    printf("Signed types: \n\n");

    print_s_type("CHAR", SCHAR_MIN, SCHAR_MAX);

    printf("Size of char: %d\n", sizeof(char));

    print_s_type("SHORT INT", SHRT_MIN, SHRT_MAX);
    print_s_type("INT", INT_MIN, INT_MAX);
    print_s_type("LONG INT", LONG_MIN, LONG_MAX);

    printf("Unsigned types: \n\n");

    print_u_type("CHAR", UCHAR_MAX);

    print_u_type("SHORT INT", USHRT_MAX);
    print_u_type("INT", UINT_MAX);
    print_u_type("LONG", ULONG_MAX);

    return 0;
}

void print_s_type(char type[], signed long minValue, signed long maxValue) {
    printf("Min value of signed %s is: %d\n", type, minValue);
    printf("Max value of signed %s is: %d\n\n", type, maxValue);
}

void print_u_type(char type[], unsigned long value) {
    printf("Max value of unsigned %s is: %d\n", type, value);
}
