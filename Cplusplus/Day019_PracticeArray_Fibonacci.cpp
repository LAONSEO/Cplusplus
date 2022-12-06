// PracticeArray_Fibonacci.cpp

#include <iostream>

int main()
{
	int arData[20]{};
	int nFibonacci{};

	arData[0] = 1;
	arData[1] = 1;

	for (int i = 2; i < 20; i++)
	{
		nFibonacci = arData[i - 2] + arData[i - 1];
		arData[i] = nFibonacci;
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", arData[i]);
	}

}
