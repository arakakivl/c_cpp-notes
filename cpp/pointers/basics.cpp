#include <iostream>

int main()
{
	// Some variable
	int i = 25;

	// Declaring a pointer
	int *p;

	// Null pointer
	p = nullptr;

	// Referencing to some variable
	p = &i;

	// Deferencing a poitner
	std::cout << "The value of i is " << *p << " and the size of p is " << sizeof(p) << std::endl;
}
