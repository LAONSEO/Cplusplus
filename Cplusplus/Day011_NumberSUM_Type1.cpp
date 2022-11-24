
#include <iostream>

int main()

{
	int nNumberInput{};
	int nNumberStart{};
	int nNumberSUM{};

	printf("Enter the number.\n");
	scanf_s("%d", &nNumberInput);

	nNumberStart = 1;
	while (nNumberStart <= nNumberInput)
	{
		nNumberSUM = nNumberSUM + nNumberStart;
		nNumberStart++;
	}

	printf("%d", nNumberSUM);

}