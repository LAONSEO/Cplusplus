// PracticeClass_7.cpp

#include <iostream>

void printData(int& nData);

int main()
{
	int nData{};
	// int& nRef = nData;
	nData = 100;
	// printf("%d\n ", nRef);

	printData(nData);
}

void printData(int& nData)
{
	printf("%d\n", nData);
}