#include <iostream>
#include <string>

int main()
{
	// A substring is a part of a string
	std::string str = "Hello, world!";
	std::string subStr = str.substr(0, 5);

	// std::string.substr(start_pos, length)
	std::cout << subStr << std::endl << std::endl;

	// Comparing again
	str = "ABCD";
	std::string r = str.compare(2, 1, "C") == 0 ? "true" : "false";

	std::cout << r << std::endl;

	str = "EFGH";
	r = str.compare(2, 2, "ABCDEFGHI", 6, 2) == 0 ? "true again!" : "now, false!";

	std::cout << r << std::endl;
}
