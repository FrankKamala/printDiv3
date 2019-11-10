// C++ program to print all the numbers
// divisible by 3
#include <iostream>
using namespace std;

// Result function with N
void result(int N)
{
	// iterate from 0 to Max
	for (int num = 1; num < N; num++)
	{

		if (num % 3 == 0)
			cout << num << " ";
	}
}


int main()
{
	// Max int
	int N = 1000;

	// Calling Number function
	result(N);
	return 0;
}

// @Kamala_Code254

