// PracticeDS_33.cpp

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vData{};

	vData.reserve(3);
	vData.resize(3);

	for (int i = 0; i < 3; i++)
	{
		vData.reserve(4);
		vData.resize(4);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", vData[i]);
		}
		printf("\n");
	}
}