// PracticeClass_12.cpp

#include <iostream>

int main()
{
	int* p{};
	int nLength{};

	scanf_s("%d", &nLength);

	p = new int[nLength] {};

	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", p[i]);
	}
	delete[] p;
}