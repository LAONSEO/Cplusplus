// PracticeClass_8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

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