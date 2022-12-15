// PracticePointer_start1.cpp
// 두 수를 입력받아 작은 수를 출력하세요.

#include <iostream>

int main()
{
	int nNumberA{};
	int nNumberB{};
	int* pNumberSmall{};

	scanf_s("%d", &nNumberA);
	scanf_s("%d", &nNumberB);

	pNumberSmall = &nNumberA;
	if (*pNumberSmall > nNumberB)
	{
		pNumberSmall = &nNumberB;
	}

	printf("\n작은 수는 %d입니다.", *pNumberSmall);
}