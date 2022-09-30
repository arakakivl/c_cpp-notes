#include <iostream>
#include <vector>

int main()
{
	// Some concepts:
		// (pointer + int) => pointer
		// (pointer - int) => pointer
		// (pointer - pointer) => int

	// See it:
	std::vector<int> numbers = { 0, 2, 4, 8, 16, 32 };
	int *ptr1, *ptr2;

	std::cout << "In the array, we have: { ";

	for(int i = 0; i < numbers.size(); ++i)
	{
		if (i != numbers.size() - 1)
		{
			std::cout << numbers[i] << ", ";
		}
		else
		{
			std::cout << numbers[i] << " }" << std::endl;
		}
	}

	ptr1 = numbers.data();
	ptr2 = &(numbers[0]);

	std::cout << std::endl;

	if (ptr1 == ptr2)
	{
		std::cout << "The ptr1 equals to ptr2!" << std::endl;
	}

	std::cout << std::endl;

	// ptr1 - ptr2 gives the number of variables that fit between these addresses
	std::cout << "Between ptr2 and ptr1, fit " << ptr2 - ptr1 << " variables of type int " << std::endl;

	ptr2 = &numbers[1];
	std::cout << "Now, fit " << ptr2 - ptr1 << std::endl;

	std::cout << std::endl;

	// Adding ints to pointers
	std::cout << "The addr of ptr1 is " << ptr1 << " and deferencing it: " << *ptr1 << std::endl;

	ptr1 += 2;
	std::cout << "The addr of ptr1 is now " << ptr1 << " and deferencing it: " << *ptr1 << std::endl;

	std::cout << std::endl;
	// Subtracting ints to pointers
	ptr1--;
	std::cout << "The addr of ptr1 is now " << ptr1 << " and deferencing it: " << *ptr1 << std::endl;
}




