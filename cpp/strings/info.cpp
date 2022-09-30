#include <iostream>
#include <string>

void print_info(std::string& s)
{
	std::cout << "Content: " << s << std::endl;
	std::cout << "Length: " << s.length() << std::endl;
	std::cout << "Capacity: " << s.capacity() << std::endl;
	std::cout << "Max size: " << s.max_size() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}

int main()
{
	// length, capacity and max_size functions
	std::string the_string = "content";
	print_info(the_string);

	// reserve function
	the_string.reserve(100);
	print_info(the_string);

	the_string.reserve(0);

	// clearing the string
	the_string.clear();
	print_info(the_string);

	// resizing to a smaller length
	the_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	the_string.resize(3);

	print_info(the_string);

	// resizing to a biggest length
	the_string.resize(20, 'b');
	print_info(the_string);
}
