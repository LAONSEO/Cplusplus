// PracticeDS_12.cpp : Quick Sort.

#include <iostream>

void printData(const int* pData, int nLength);
void swapData(int& nDst, int& nSrc);
void quickSort(int* pData, int nLength);

int main()
{
	int arData[10]{ 4,8,2,3,9,7,1,6,10,5 };
	//int arData[2]{ 2,1 };
	int nLength = 10;

	int* pData = arData;

	printData(arData, 10);

	quickSort(arData, 10);

	printData(arData, 10);
}

void printData(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}

void swapData(int& nDst, int& nSrc)
{
	int nTmp{};
	nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

void quickSort(int* pData, int nLength)
{
	int nPivot = 0;
	int nLow = 1;
	int nHigh = nLength - 1;

	if (nLength <= 1)
	{
		return;
	}

	while (nLow <= nHigh)
	{
		while (nLow < nLength && pData[nLow] < pData[nPivot])
		{
			nLow++;
		}
		while (pData[nHigh] > pData[nPivot])
		{
			nHigh--;
		}

		//if (nHigh < nLow)
		//{
		//	swapData(pData[nPivot], pData[nHigh]);
		//}
		//else
		//{
		//	swapData(pData[nLow], pData[nHigh]);
		//}

		int nSwapIndex = nLow;
		if (nHigh < nLow)
			nSwapIndex = nPivot;

		swapData(pData[nSwapIndex], pData[nHigh]);
	}

	quickSort(pData, nHigh);
	quickSort(pData + nLow, nLength - nLow);
}