//StarPrint_SentenceFor_Type2

#include <iostream>

int main()
{
	int nOMaxCount{};
	int nXMaxCount{};
	int nOAdd{};
	int nXAdd{};

	nOMaxCount = 1;
	nXMaxCount = 4;
	nOAdd = 1;
	nXAdd = -1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < nOMaxCount; j++)
		{
			printf("O");
		}

		for (int j = 0; j < nXMaxCount; j++)
		{
			printf("X");
		}

		printf("\n");

		nOMaxCount += nOAdd;
		nXMaxCount += nXAdd;

	}

}
