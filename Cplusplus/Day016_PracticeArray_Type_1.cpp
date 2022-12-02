// PracticeArray_1.cpp
#include <iostream>

int main()
{
	int arData[10]{};
	int nEvenCount{};

	nEvenCount = 2;

	for (int i = 0; i < 9; i++)
	{
		arData[i] = nEvenCount;

		nEvenCount += 2;
	}

	for (int i = 0; i < 9; i++)
	{
		printf("%d\n", arData[i]);
	}

}
