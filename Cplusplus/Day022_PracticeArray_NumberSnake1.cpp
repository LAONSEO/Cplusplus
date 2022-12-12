
#include <iostream>

int main()
{
	int arData[4][4]{};
	int nData{};
	int nIndex1{};
	int nIndex2{};
	int nAdd{};

	nAdd = 1;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			nData++;
			arData[nIndex1][nIndex2] = nData;
			nIndex2 += nAdd;
		}

		nAdd *= -1;
		nIndex1++;
		nIndex2 += nAdd;
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

