
#include <iostream>

int main()
{
	int nNumber1{};
	int nNumber2{};
	int nNumber3{};
	int nNumber4{};
	int nNumber5{};
	int nMinNumber{};

	printf("Enter the Number1\n");
	scanf_s("%d", &nNumber1);

	printf("\nEnter the Number2\n");
	scanf_s("%d", &nNumber2);

	printf("\nEnter the Number3\n");
	scanf_s("%d", &nNumber3);

	printf("\nEnter the Number4\n");
	scanf_s("%d", &nNumber4);

	printf("\nEnter the Number5\n");
	scanf_s("%d", &nNumber5);

	nMinNumber = nNumber1;

	if (nMinNumber > nNumber2)
		nMinNumber = nNumber2;

	if (nMinNumber > nNumber3)
		nMinNumber = nNumber3;

	if (nMinNumber > nNumber4)
		nMinNumber = nNumber4;

	if (nMinNumber > nNumber5)
		nMinNumber = nNumber5;

	printf("\nThe Minimum Number is %d.\n", nMinNumber);

}
