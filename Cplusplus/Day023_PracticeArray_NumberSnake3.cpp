// PracticeArray_NumberSnake3.cpp
#include <iostream>

int main()
{
	int arData[4][4]{};
	int nData{};
	int nAdd{};

	nData = 1;
	nAdd = 1;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arData[i][j] = nData;
			nData += nAdd;
		}

		nAdd *= -1;
		nData += 4 + nAdd;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d", arData[i][j]);
		}
		printf("\n");
	}
}