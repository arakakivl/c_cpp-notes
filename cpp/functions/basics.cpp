#include <iostream>

long square(long param);
void increase_variable(int& variable);

int main()
{
	// square
	std::cout << "The sqrt of 2564 is " << square(2564) << std::endl;

	std::cout << std::endl;

	// increase_variable
	int i = 0;
	std::cout << "Value of i: " << i << std::endl;

	increase_variable(i);
	std::cout << "Now the value of i: " << i << std::endl;
}

long square(long param)
{
	return param * param;
}

void increase_variable(int& variable)
{
	variable++;
}
