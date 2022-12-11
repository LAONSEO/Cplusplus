#include <iostream>

int main()
{
	int arData[9][9]{};
	int nIndex1{};
	int nIndex2{};
	int nData{};
	int nCountChangeVertical{};
	int nCountChangeVerticalRemainder{};

	nCountChangeVertical = 0;
	nIndex1 = 0;
	nIndex2 = 2;
	nData = 1;
	for (int i = 0; i < 25; i++)
	{
		arData[nIndex1][nIndex2] = nData;
		nData++;

		nIndex1--;
		nIndex2++;

		nCountChangeVertical++;
		nCountChangeVerticalRemainder = nCountChangeVertical % 5;

		if (nCountChangeVerticalRemainder == 0)
		{
			nIndex1 += 2;
			nIndex2 -= 1;
		}
		else if (nIndex1 < 0)
		{
			nIndex1 = 4;
		}
		else if (nIndex2 > 4)
		{
			nIndex2 = 0;
		}

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%3d ", arData[i][j]);
		}
		printf("\n");
	}
}