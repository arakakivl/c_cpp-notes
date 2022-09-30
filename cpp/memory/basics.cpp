#include <iostream>

int main()
{
	// new keyword

	float *array = new float[20];
	int count = new int;

	// delete keyword

	delete [] array;
	delete count;
}
