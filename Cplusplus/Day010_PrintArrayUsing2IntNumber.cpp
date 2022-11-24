
#include <iostream>

int main()
{

	int nNumber1{};
	int nNumber2{};
	int nNumberGap{};
	int nNumberSmall{};
	int nNumberBig{};
	int nNumberStart{};

	printf("Enter the 1st Number\n");
	scanf_s("%d", &nNumber1);

	printf("Enter the 2nd Number\n");
	scanf_s("%d", &nNumber2);

	nNumberGap = nNumber1 - nNumber2;


	if (nNumberGap < 0)
	{
		nNumberSmall = nNumber1;
		nNumberBig = nNumber2;
		printf("\n%d is the smaller one.\n", nNumberSmall);
	}
	else if (nNumberGap > 0)
	{
		nNumberSmall = nNumber2;
		nNumberBig = nNumber1;
		printf("\n%d is the smaller one.\n", nNumberSmall);
	}

	nNumberStart = nNumberSmall;
	while (nNumberStart <= nNumberBig)
	{
		printf("\n%d\n", nNumberStart);
		nNumberStart++;
	}


}