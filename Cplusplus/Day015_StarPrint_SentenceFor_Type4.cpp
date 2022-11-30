// Day015_StarPrint_SentenceFor_Type4.cpp

#include <iostream>

int main()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i == j || i == 8 - j)
				printf("X");
			else if (i == 4 - j || i == 12 - j)
				printf("X");
			else if (i == j + 4 || i == j - 4)
				printf("X");
			else
				printf(" ");

		}

		printf("\n");

	}
}
