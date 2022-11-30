// StarPrint_SentenceFor_Type3

#include <iostream>

int main()
{
	//exercise_1
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= j)
			{
				printf("*");
			}

		}

		printf("\n");

	}

	printf("\n");
	printf("\n");
	printf("\n");

	//exercise_2
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= 4 - j)
			{
				printf("*");
			}

		}

		printf("\n");

	}

	printf("\n");
	printf("\n");
	printf("\n");

	//exercise_3
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j || i == 4 - j)
			{
				printf("*");
			}
			else
				printf(" ");

		}

		printf("\n");

	}

}
