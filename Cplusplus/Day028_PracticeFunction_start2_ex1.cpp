// PracticeFunction_start2_ex1.cpp : 두 수를 입력받아 작은 수를 출력하고 그 작은 수가 짝수인지 홀수인지 출력하시오.

#include <iostream>

void printNumMin(int nNum1, int nNum2);
void chooseNumMin(int nNum1, int nNum2, int* nMin);
void calcRemainder(int nInputNum, int* nRemainder);
void printEvenOdd(int nInputNum);

int main()
{
	int nNumberScan1{};
	int nNumberScan2{};
	int nNumberMin{};
	int nRemainder{};

	printf("1번째 숫자를 입력하세요.\n");
	scanf_s("%d", &nNumberScan1);
	printf("2번째 숫자를 입력하세요.\n");
	scanf_s("%d", &nNumberScan2);

	printNumMin(nNumberScan1, nNumberScan2);

	chooseNumMin(nNumberScan1, nNumberScan2, &nNumberMin);

	calcRemainder(nNumberMin, &nRemainder);

	printEvenOdd(nRemainder);

}

void printNumMin(int nNum1, int nNum2)
{
	if (nNum1 < nNum2)
	{
		printf("\n작은 수는 %d 입니다.\n", nNum1);
	}
	if (nNum2 < nNum1)
	{
		printf("\n작은 수는 %d 입니다.\n", nNum2);
	}
}

void chooseNumMin(int nNum1, int nNum2, int* nMin)
{
	if (nNum1 < nNum2)
	{
		*nMin = nNum1;
	}
	if (nNum2 < nNum1)
	{
		*nMin = nNum2;
	}
}

void calcRemainder(int nInputNum, int* nRemainder)
{
	*nRemainder = nInputNum % 2;
}

void printEvenOdd(int nInputNum)
{
	if (nInputNum == 0)
	{
		printf("\nEven.\n");
	}
	else if (nInputNum == 1)
	{
		printf("\nOdd.\n");
	}
}
