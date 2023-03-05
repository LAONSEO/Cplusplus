// PracticeDS_11.cpp

#include <iostream>

//bool BinarySearch(const int* pData, int nLength, const int** ppResult);
const int* BinarySearch(const int* pData, int nLength, int nFindData);

int main()
{
	int arData[20]{};
	int nLength = 20;

	for (int i = 0; i < 20; i++)
	{
		arData[i] = i * 2;
	}

	int nFindData{};
	scanf_s("%d", &nFindData);

	const int* pFind = BinarySearch(arData, 20, nFindData);
	if (pFind)
	{
		printf("index %d\n", (int)(pFind - arData));
	}
	else
	{
		printf("Not exist");
	}
}

const int* BinarySearch(const int* pData, int nLength, int nFindData)
{
	int nFindIndex = nLength / 2;

	while (nLength > 0 && pData[nFindIndex] != nFindData)
	{
		if (nFindData < pData[nFindIndex])
		{
			nLength = nFindIndex - 1;
		}
		else if (nFindData > pData[nFindIndex])
		{
			pData = pData + nFindIndex + 1;
			nLength = nLength - (nFindIndex + 1);
		}
		nFindIndex = nLength / 2;
	}
	if (nLength < 0)
	{
		return nullptr;
	}

	return pData + nFindIndex;
}