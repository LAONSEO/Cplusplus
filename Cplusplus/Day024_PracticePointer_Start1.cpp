// PracticePointer_start1.cpp
// �� ���� �Է¹޾� ���� ���� ����ϼ���.

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

	printf("\n���� ���� %d�Դϴ�.", *pNumberSmall);
}