#include <iostream>
#include <string>

int main()
{
	// A set of chars!
	std::string str = "Hello";

	// Concatenating strings
	str += ", World!";
	std::cout << str << std::endl;

	std::cout << std::endl;

	// string as input
	std::string input;

	std::cout << "Write something: " << std::endl;
	getline(std::cin, input);

	std::cout << input << std::endl << std::endl;

	// Comparing strings
	std::string a = "Hello!";
	std::string b = "Hi!";

	// As in ASCII code i > e, then we have b > a
	std::cout << "b > a: " << (b > a) << std::endl;

	// If the strings match, then we compare its length:
	std::cout << "Hi < Hii: " << ("Hi" < "Hii") << std::endl << std::endl;

	a = b;

	// A more sophisticated function
	if (a.compare(b) == 0)
		std::cout << "It's strange, but if a == b, then a.compare(b) == 0 !" << std::endl;
}
