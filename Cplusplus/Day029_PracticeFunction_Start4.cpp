// PracticeFunction_start4.cpp

#include <iostream>

void addInt(int nNum1, int nNum2, int* nSum);

int main()
{
	int nNumber1{};
	int nNumber2{};
	int nSum{};

	printf("첫번째 수를 입력하세요.\n");
	scanf_s("%d", &nNumber1);
	printf("두번째 수를 입력하세요.\n");
	scanf_s("%d", &nNumber2);

	addInt(nNumber1, nNumber2, &nSum);
	printf("합은 %d 입니다.\n", nSum);
}

void addInt(int nNum1, int nNum2, int* nSum)
{
	*nSum = nNum1 + nNum2;
}