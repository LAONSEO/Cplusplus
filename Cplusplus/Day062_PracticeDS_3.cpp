// PracticeDS_3.cpp : bubble sort.

#include <iostream>

void swapData(int& Dst, int& Src);
void printArray(const int* pData, int nLength);
void BubbleSortLogic(int* pData, int nLength);
void BubbleSort(int* pData, int nLength);

int main()
{
	int arData[7]{ 6,7,1,5,3,2,4 };

	BubbleSort(arData, 7);
	printArray(arData, 7);
}

void swapData(int& Dst, int& Src)
{
	int nTmp{};
	nTmp = Dst;
	Dst = Src;
	Src = nTmp;
}

void printArray(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}

void BubbleSortLogic(int* pData, int nLength)
{
	int nIndex = nLength - 1;
	for (int i = 0; i < nIndex; i++)
	{
		if (pData[i] > pData[i + 1])
			swapData(pData[i], pData[i + 1]);
	}
}

void BubbleSort(int* pData, int nLength)
{
	int nIndex = nLength - 1;
	for (int i = 0; i < nIndex; i++)
	{
		BubbleSortLogic(pData, nLength);
	}
}