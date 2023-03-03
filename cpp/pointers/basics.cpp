#include <iostream>

int main()
{
	// Some variable
	short int i = 30;

	// Declaring a pointer
	short int *p;

	// Null pointer
	p = nullptr;

	// Referencing to some variable
	p = &i;

	// Deferencing a poitner
	std::cout << "The value of i is " << *p << " and the size of p is " << sizeof(p) << std::endl;

	// Showing memory addr
	std::cout << "Its memory addr is: " << p << std::endl;
}
