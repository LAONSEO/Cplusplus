// PracticeDS_13.cpp : Merge Sort.

#include <iostream>

void mergeSort(int* pData, int nLength, int* pTmp);
void printData(int* pData, int nLength);

int main()
{
	int arData[9]{ 2,5,7,8,1,3,4,6,9 };
	int arTmp[9]{};

	mergeSort(arData, 9, arTmp);
	printData(arData, 9);
}

// must tmpLength >= nLength
void mergeSort(int* pData, int nLength, int* pTmp)
{
	if (nLength <= 1)
		return;

	int* pLeft = pData;
	int nLeftLength = nLength / 2;
	int* pRight = pData + nLeftLength;
	int nRightLength = nLength - nLeftLength;

	int nLeftIndex{};
	int nRightIndex{};
	int nTmpIndex{};

	mergeSort(pLeft, nLeftLength, pTmp);
	mergeSort(pRight, nRightLength, pTmp);

	while (nLeftIndex < nLeftLength && nRightIndex < nRightLength)
	{
		if (pLeft[nLeftIndex] < pRight[nRightIndex])
		{
			pTmp[nTmpIndex] = pLeft[nLeftIndex];
			nLeftIndex++;
		}
		else
		{
			pTmp[nTmpIndex] = pRight[nRightIndex];
			nRightIndex++;
		}
		nTmpIndex++;
	}

	while (nLeftIndex < nLeftLength)
	{
		pTmp[nTmpIndex] = pLeft[nLeftIndex];
		nLeftIndex++;
		nTmpIndex++;
	}

	while (nRightIndex < nRightLength)
	{
		pTmp[nTmpIndex] = pRight[nRightIndex];
		nRightIndex++;
		nTmpIndex++;
	}

	//Type. 2
	//for (int i = 0; i < nLength; i++)
	//{
	//	int* pMin = pLeft;
	//	int* pMinIndex = &nLeftIndex;

	//	if (nLeftIndex >= nLeftLength || (nRightIndex < nRightLength && pRight[nRightIndex] < pLeft[nLeftIndex]))
	//	{
	//		pMin = pRight;
	//		pMinIndex = &nRightIndex;
	//	}

	//	pTmp[i] = pMin[*pMinIndex];
	//	(*pMinIndex)++;
	//}

	//Type. 3
	//int* pLeft = pData;
	//int* pLeftOverFlow = pData + (nLength / 2);
	//int* pRight = pLeftOverFlow;
	//int* pRightOverFlow = pData + nLength;

	//mergeSort(pLeft, (int)(pLeftOverFlow - pLeft), pTmp);
	//mergeSort(pRight, (int)(pRightOverFlow - pRight), pTmp);

	//for (int i = 0; i < nLength; i++)
	//{
	//	int** ppMin = &pLeft;
	//	if (pLeft >= pLeftOverFlow || (pRight < pRightOverFlow && *pLeft > *pRight))
	//		ppMin = &pRight;
	//	pTmp[i] = **ppMin;
	//	(*ppMin)++;
	//}

	for (int i = 0; i < nLength; i++)
	{
		pData[i] = pTmp[i];
	}
}

void printData(int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}