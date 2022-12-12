
#include <iostream>

int main()
{
	int arData[4][4]{};
	int nData{};
	int nIndex1{};
	int nIndex2{};
	int nCount{};
	int nAdd{};

	nData = 1;
	nAdd = 1;
	nCount = 0;
	for (int i = 0; i < 16; i++)
	{
		nCount++;

		arData[nIndex1][nIndex2] = nData;
		nData++;
		nIndex2 += nAdd;

		if (nCount == 4 || nCount == 8 || nCount == 12)
		{
			nIndex1++;
			nIndex2 += nAdd * -1;
			nAdd *= -1;
		}
	}


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}

}