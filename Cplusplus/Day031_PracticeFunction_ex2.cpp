// PracticeFunction_ex2.cpp
// 배열에서 가장 작은 수의 인덱스를 구하는 함수. (단, 배열 내에 중복데이터는 없다)

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