// PracticeArray_ChooseMinNumber.cpp

#include <iostream>

int main()
{
	int arData[5]{ 51, 5, 73, 12, 9 };
	int nIndexMinData{};

	nIndexMinData = 0;

	for (int i = 0; i < 5; i++)
	{
		if (arData[nIndexMinData] > arData[i])
		{
			nIndexMinData = i;
		}

	}

	printf("%d", nIndexMinData);

}
