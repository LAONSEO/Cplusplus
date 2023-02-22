// PracticeDS_5.cpp

#include <iostream>

void func(int nData);

int main()
{
	func(5);
}

void func(int nData)
{
	if (nData == 0)
		return;

	func(nData - 1);
	printf("%d\n", nData);
}