// PracticeDS_13.cpp : mergeSort

#include <iostream>

void mergeSort(int* pData, int nLength, int* pTmp);
void printData(int* pData, int nLength);

int main()
{
	int arData[9]{ 2,5,7,8,1,3,4,6,9 };
	int arTmp[9]{};

	int nLength = 9;
	int* pData = arData;
	int* pTmp = arTmp;

	int* pLeft = pData;
	int nLeftLength = nLength / 2;
	int* pRight = pData + nLeftLength;
	int nRightLength = nLength - nLeftLength;

	int nLeftIndex{};
	int nRightIndex{};
	int nTmpIndex{};


	// 정렬된 배열 두 개를 한 개로 합치는 내용

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

	for (int i = 0; i < nLength; i++)
	{
		pData[i] = pTmp[i];
	}

	printData(arData, 9);
}

// must tmpLength >= nLength
void mergeSort(int* pData, int nLength, int* pTmp)
{
}

void printData(int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}
