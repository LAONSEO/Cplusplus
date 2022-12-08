
// PracticeArray_Print2D.cpp : Index와 Data 활용하여 작성하되, i 는 연산 삼지 말고 필요하면 변수를 충분히 선언해서 완성할 것.

#include <iostream>

int main()
{
	int arData[3][4]{};
	int nIndexA{};
	int nIndexB{};
	int nData{};

	for (int i = 0; i < 12; i++)
	{
		nIndexA = i / 4;
		nIndexB = i % 4;

		nData = i + 1;

		arData[nIndexA][nIndexB] = nData;

		//if (nIndexA == 0)
		//{
		//	nData = i + 1;
		//	arData[nIndexA][nIndexB] = nData;
		//}
		//else if (nIndexA == 1)
		//{
		//	nData = i + 1;
		//	arData[nIndexA][nIndexB] = nData;
		//}
		//else if (nIndexA == 2)
		//{
		//	nData = i + 1;
		//	arData[nIndexA][nIndexB] = nData;
		//}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d ", arData[i][j]);
		}
		printf("\n");
	}
}
