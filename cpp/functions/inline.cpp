#include <iostream>

inline int function(int parameter);

int main()
{
	int var = 1;

	var = function(var);
	var = function(var);
	var = function(var);

	std::cout << var << std::endl;
}

inline int function(int parameter)
{
	return parameter * 2;
}
