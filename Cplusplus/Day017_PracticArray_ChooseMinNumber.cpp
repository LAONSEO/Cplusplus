
#include <iostream>

int main()
{
	int arData[5]{};
	int nIndex{};
	int nNextIndex{};
	int nNumberSmall{};
	int nNumberNext{};
	int nNumberGap{};
	int nNumberMin{};

	//printf("Enter the 1st Number.\n");
	//scanf_s("%d\n", arData[0]);

	//printf("Enter the 2nd Number.\n");
	//scanf_s("%d\n", arData[1]);

	//printf("Enter the 3rd Number.\n");
	//scanf_s("%d\n", arData[2]);

	//printf("Enter the 4th Number.\n");
	//scanf_s("%d\n", arData[3]);

	//printf("Enter the 5th Number.\n");
	//scanf_s("%d\n", arData[4]);

	nIndex = 0;
	nNextIndex = 1;
	nNumberSmall = arData[0];
	while (nIndex < 5)
	{
		nNumberNext = arData[nNextIndex];

		nNumberGap = nNumberSmall - nNumberNext;

		if (nNumberGap > 0)
		{
			nNumberNext = nNumberSmall;
		}

		nIndex++;
		nNextIndex++;

		nNumberMin = nNumberSmall;

	}

	printf("%d", nNumberMin);

}
