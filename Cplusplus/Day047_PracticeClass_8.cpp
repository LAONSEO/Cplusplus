// PracticeClass_8.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.

#include <iostream>

void printbyRef(const int& nData);
void printbyPointer(int* pData);

int main()
{
	int nData{};

	nData = 100;

	printbyRef(nData);

	int* pData{};

	pData = &nData;

	printbyPointer(pData);
}

void printbyRef(const int& nData)
{
	printf("%d\n", nData);
}

void printbyPointer(int* pData)
{
	printf("%d\n", *pData);
}