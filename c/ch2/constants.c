#include <stdio.h>

int main() {
	// Integer constants
	int a = 1234; // taken as int
	long l = 123456789L; // taken as long

	long al = a * 1234567890; // taken as long

	int b = 1234u; // unsigned int
	long ll = 1234567890ul; // unsigned long

	// Double constants
	float f = 4.0; // taken as double
	float ff = 4.0f; // taken as float

	double d = 1e-100l; // taken as long double

	// Either 'l' or 'L' are used in long (type) creation.
	// They're not required, as implicit considered by its size.

	// Octal and hexadecimal numbers
	int octal = 037; // or 31 as decimal
	int hex = 0x1f; // or 31 as decimal

	// Appending 'l' and/or 'u' make them long and/or unsigned integers.
	int luhex = 0x1ful

	// As we can describe escape sequences as char, we can describe them as int too. Thus,
	// we can also represent them as octal and hexadecimal escape sequences.
	int tab_as_octal = '\013';
	int tab_as_hex = '\xb';

	// A constant expression is an expression that involves only constants and
	// they're evaluated at compile time and may be used in any any place that a contant can occurr.

	// A string constant or string literal is a sequence of zero or more characters surrounded
	// by double quotes. Every string is finished when a \0 character is reached.

	// There are enum types too:
	enum boolean { NO, YES };.
}
