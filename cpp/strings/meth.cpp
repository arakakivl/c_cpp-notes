#include <iostream>
#include <string>

int main()
{
	// Finding strings inside strings
	std::string hello = "Hello, world!";
	if (hello.find("hello", 0) == std::string::npos)
		std::cout << "Apparently, there's no \"hello\" inside it. Maybe a \"Hello\"?" << std::endl;
	else
		std::cout << "Can \"Hello\" == \"hello\"?!" << std::endl;

	int pos = hello.find("Hello", 0);
	std::cout << "The position of \"Hello\" starts on " << pos << std::endl;
}
