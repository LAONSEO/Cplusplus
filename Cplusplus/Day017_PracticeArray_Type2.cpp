// PracticeArray_Type2.cpp

#include <iostream>

int main()
{
	int arData[10]{};
	int nEvenCount{};
	int nEven{};


	nEvenCount = 0;
	nEven = 0;
	while (nEvenCount < 10)
	{
		nEven += 2;
		arData[nEvenCount] = nEven;

		nEvenCount++;
	}


	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arData[i]);
	}

}