// PracticeFunction_start6_return1.cpp

#include <iostream>

int func();
void funcP(int* P);

int main()
{
	int nData1{};
	int nData2{};

	nData1 = func(); // ���簡 2��, �ӽ� ������ �ѹ� ���⼭ �ѹ�.
	printf("%d\n", nData1);

	funcP(&nData2);
	printf("%d\n", nData2);

	printf("%d\n", func()); // �ӽ� ������ �ӽ� ������ �����ֱ� ������, �� �ٸ� �Լ��� ������ �žƹ��� ��Ȳ.
}

int func()
{
	return 100;
}

void funcP(int* p)
{
	*p = 2000;
}