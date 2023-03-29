// PracticeDS_24.cpp : class function pointer

#include <iostream>

class PracticeDS_24_C_TEST
{
public:
	void PracticeDS_24_print(int nData);
	int PracticeDS_24_add(int nData1, int nData2);
};

int main()
{
	//practice 1
	void (PracticeDS_24_C_TEST:: * pFunc1)(int) {}; // 클래스 함수 포인터 pFunc1 생성.
	pFunc1 = &PracticeDS_24_C_TEST::PracticeDS_24_print; // 클래스 함수 포인터 pFunc1 연결.

	PracticeDS_24_C_TEST cTest1{}; // cTest1 객체 생성.
	(cTest1.*pFunc1)(50); // cTest1 객체로 클래스 함수 포인터 pFunc1 사용.


	//practice 2
	int (PracticeDS_24_C_TEST:: * pFunc2)(int, int) {}; // 클래스 함수 포인터 pFunc2 생성.
	pFunc2 = &PracticeDS_24_C_TEST::PracticeDS_24_add; // 클래스 함수 포인터 pFunc2 연결.

	PracticeDS_24_C_TEST cTest2{}; // cTest2 객체 생성.
	(cTest2.*pFunc1)(100); // cTest2 객체로 클래스 함수 포인터 pFunc1 사용.
	printf("%d\n", (cTest2.*pFunc2)(100, 500)); // cTest2 객체로 클래스 함수 포인터 pFunc2 사용.
}

void PracticeDS_24_C_TEST::PracticeDS_24_print(int nData)
{
	printf("%d\n", nData);
}

int PracticeDS_24_C_TEST::PracticeDS_24_add(int nData1, int nData2)
{
	return nData1 + nData2;
}