// PracticeDS_10.cpp // !!!!! wrong code.!!!!!

#include <iostream>

bool SearchBinary(const int* pData, int nLength, int value, int& nResult);

int main()
{
	int arData[7]{ 11,22,33,44,55,66,77 };
	int nResult{};

	SearchBinary(arData, 7, 100, nResult);
	printf("%d 번지에 있음. \n", nResult);
}

bool SearchBinary(const int* pData, int nLength, int value, int& nResult)
{
	int nIndexStart = 0;
	int nIndexEnd = nLength - 1;
	int nIndexMid{};
	int nCount1{};
	int nCount2{};

	nIndexMid = (nIndexStart + nIndexEnd) / 2;

	if (value == pData[nIndexMid])
	{
		nResult = nIndexMid;
	}

	while (value != pData[nIndexMid])
	{
		if (nCount1 > 0 && nCount2 > 0)
		{
			return false;
		}
		if (value < pData[nIndexMid])
		{
			nIndexEnd = nIndexMid - 1;
			if (value > pData[nIndexMid - 1] || nIndexEnd < 0)
			{
				nResult = -1;
				return false;
			}
			nIndexMid = (nIndexStart + nIndexEnd) / 2;
			nCount1++;
			nResult = nIndexMid;
		}
		if (value > pData[nIndexMid])
		{
			nIndexStart = nIndexMid + 1;
			if (value < pData[nIndexMid + 1] || nIndexStart >= nLength)
			{
				nResult = -1;
				return false;
			}
			nIndexMid = (nIndexStart + nIndexEnd) / 2;
			nCount2++;
			nResult = nIndexMid;
		}
	}
	return true;
}