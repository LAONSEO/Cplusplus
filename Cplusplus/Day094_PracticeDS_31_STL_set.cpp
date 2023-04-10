// PracticeDS_31.cpp

#include <iostream>
#include <set>

int main()
{
	std::set<int> setData{};

	setData.insert(10);
	setData.insert(5);
	setData.insert(8);
	setData.insert(3);
	setData.insert(7);
	setData.insert(1);

	std::set<int>::iterator iter = setData.begin();
	while (iter != setData.end())
	{
		printf("%d ", *iter);
		iter++;
	}
	printf("\n");

	std::set<int>::iterator iterFind = setData.find(5);
	if (iterFind != setData.end())
		printf("있다\n");
	else
		printf("없다\n");
}