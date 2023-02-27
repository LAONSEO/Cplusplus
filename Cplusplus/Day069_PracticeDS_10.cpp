// PracticeDS_10.cpp

#include <iostream>

int SearchBinary(int* pData, int nLength, int value, int& nResult);

int main()
{
	int arData[7]{ 11,22,33,44,55,66,77 };
	int nResult{};

	SearchBinary(arData, 7, 22, nResult);
	printf("%d 번지에 있음. \n", nResult);
}

int SearchBinary(int* pData, int nLength, int value, int& nResult)
{
	int nIndexStart = 0;
	int nIndexEnd = nLength - 1;
	int nIndexMid{};

	nIndexMid = (nIndexStart + nIndexEnd) / 2;

	if (value == pData[nIndexMid])
	{
		nResult = nIndexMid;
	}

	while (value != pData[nIndexMid])
	{
		if (value < pData[nIndexMid])
		{
			nIndexEnd = nIndexMid - 1;
			nIndexMid = (nIndexStart + nIndexEnd) / 2;
		}
		if (value > pData[nIndexMid])
		{
			nIndexStart = nIndexMid + 1;
			nIndexMid = (nIndexStart + nIndexEnd) / 2;
		}
		nResult = nIndexMid;
	}
	return nResult;
}