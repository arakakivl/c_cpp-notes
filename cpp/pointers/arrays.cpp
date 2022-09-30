#include <iostream>

int main()
{
	// Config about our array of pointers
	int m = 3;
	int n = 3;

	// Declaring an array of pointers
	int **ptrarr = new int* [m];

	// Assigning a value for each pointer in the array
	for (int i = 0; i < m; ++i)
		ptrarr[i] = new int[n];

	// Now, each pointer is pointing to an array of three items.

	// Assigning values for each item in the arrays
	for (int p = 0, q = 0, r = 0; p < m;)
	{
		ptrarr[p][q] = r;
		++r;

		if (q != 2)
		{
			++q;
		}
		else
		{
			++p;
			q = 0;
		}
	}

	// Displaying the array
	for(int j = 0, k = 0; j < m;)
	{
		if (k != 2)
		{
			std::cout << "[" << ptrarr[j][k] << "] ";
			++k;
		}
		else
		{
			std::cout << "[" << ptrarr[j][k] << "] " << std::endl;

			k = 0;
			++j;
		}
	}

	// Releasing everything
	for (int v = 0; v < m; ++v)
		delete [] ptrarr[v];

	delete [] ptrarr;
}







