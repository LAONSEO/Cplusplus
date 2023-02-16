// PracticeDS_2.cpp : insert sort.

#include <iostream>

void printArray(const int* pData, int nLength);
void InsertSortLogic(int* pData, int nBufferLength, int nDataSize, int nInsertData);
void InsertSort(int* pData, int nBufferLength);

int main()
{
	int arData[7]{ 7,1,3,5,2,4,6 };

	InsertSort(arData, 7);
	printArray(arData, 7);
}

void printArray(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}

void InsertSortLogic(int* pData, int nBufferLength, int nDataSize, int nInsertData)
{
	int nIndex = nDataSize - 1;
	while (nIndex >= 0 && pData[nIndex] > nInsertData)
	{
		pData[nIndex + 1] = pData[nIndex];
		nIndex--;
	}
	pData[nIndex + 1] = nInsertData;
}

void InsertSort(int* pData, int nBufferLength)
{
	int nDataSize = 1;
	while (nDataSize < nBufferLength)
	{
		InsertSortLogic(pData, nBufferLength, nDataSize, pData[nDataSize]);
		nDataSize++;
	}
}