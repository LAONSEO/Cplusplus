// PracticeFunction_start4.cpp

#include <iostream>

void addInt(int nNum1, int nNum2, int* nSum);

int main()
{
	int nNumber1{};
	int nNumber2{};
	int nSum{};

	printf("ù��° ���� �Է��ϼ���.\n");
	scanf_s("%d", &nNumber1);
	printf("�ι�° ���� �Է��ϼ���.\n");
	scanf_s("%d", &nNumber2);

	addInt(nNumber1, nNumber2, &nSum);
	printf("���� %d �Դϴ�.\n", nSum);
}

void addInt(int nNum1, int nNum2, int* nSum)
{
	*nSum = nNum1 + nNum2;
}