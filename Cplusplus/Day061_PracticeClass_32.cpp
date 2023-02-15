// PracticeClass_32.cpp

#include <iostream>

int findMinIndex(const int* pData, int nLength);
void swapData(int& nDst, int& nSrc);
void selectionSortLogic(int* pData, int nLength);
void printData(const int* pData, int nLength);

int main()
{
	int arData[7]{ 5,3,1,7,6,2,4 };

	selectionSortLogic(arData, 7);
	printData(arData, 7);
}

int findMinIndex(const int* pData, int nLength)
{
	int nMinIndex = 0;
	for (int i = 1; i < nLength; i++)
	{
		if (pData[nMinIndex] > pData[i])
			nMinIndex = i;
	}
	return nMinIndex;
}

void swapData(int& nDst, int& nSrc)
{
	int nTmp{};
	nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

void selectionSortLogic(int* pData, int nLength)
{
	int nLoopCount = nLength - 1;

	for (int i = 0; i < nLoopCount; i++)
	{
		swapData(pData[0], pData[findMinIndex(pData, nLength)]);
		nLength--;
		pData++;
	}
}

void printData(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
}