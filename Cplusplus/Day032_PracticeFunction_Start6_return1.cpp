// PracticeFunction_start6_return1.cpp

#include <iostream>

int func();
void funcP(int* P);

int main()
{
	int nData1{};
	int nData2{};

	nData1 = func(); // 복사가 2번, 임시 변수에 한번 여기서 한번.
	printf("%d\n", nData1);

	funcP(&nData2);
	printf("%d\n", nData2);

	printf("%d\n", func()); // 임시 공간에 임시 변수가 남았있기 때문에, 또 다른 함수에 변수로 꼽아버린 상황.
}

int func()
{
	return 100;
}

void funcP(int* p)
{
	*p = 2000;
}