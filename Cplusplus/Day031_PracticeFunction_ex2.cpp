// PracticeFunction_ex2.cpp
// �迭���� ���� ���� ���� �ε����� ���ϴ� �Լ�. (��, �迭 ���� �ߺ������ʹ� ����)

#include <iostream>

void findNumberMinIndex(const int* pArray, int nLength, int* pNumberMinIndex);

int main()
{
	int arData[5]{ 9,3,5,8,1 };
	int arDataLength(5);
	int nIndex{};

	findNumberMinIndex(arData, arDataLength, &nIndex);
	printf("%d\n", nIndex);
}

void findNumberMinIndex(const int* pArray, int nLength, int* pNumberMinIndex)
{
	*pNumberMinIndex = 0;
	for (int i = 0; i < nLength; i++)
	{
		if (pArray[*pNumberMinIndex] > pArray[i])
		{
			*pNumberMinIndex = i;
		}
	}
}