// PracticeDS_8.cpp

#include <iostream>

void calGCD(int nDst, int nSrc, int& nResult);

int main()
{
	int nResult{};

	calGCD(1071, 1029, nResult);

	printf("%d\n", nResult);
}

void calGCD(int nDst, int nSrc, int& nResult)
{
	int nRemainder = nDst % nSrc;

	if (nRemainder == 0)
	{
		nResult = nSrc;
		return;
	}

	nDst = nSrc;
	nSrc = nRemainder;
	calGCD(nDst, nSrc, nResult);
}