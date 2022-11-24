
#include <iostream>

int main()
{
	int nNumberInput{};
	int nNumberRemainder{};
	int nNumberStart{};
	int nDivisorCount{};

	printf("Enter the number.\n");
	scanf_s("%d", &nNumberInput);

	nNumberStart = 1;
	nDivisorCount = 0;
	while (nNumberStart <= nNumberInput)
	{
		nNumberRemainder = nNumberInput % nNumberStart;

		if (nNumberRemainder == 0)
		{
			nDivisorCount++;
		}

		nNumberStart++;

	}

	printf("The number of the divisors is %d.\n", nDivisorCount);

}