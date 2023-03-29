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
	void (PracticeDS_24_C_TEST:: * pFunc1)(int) {}; // Ŭ���� �Լ� ������ pFunc1 ����.
	pFunc1 = &PracticeDS_24_C_TEST::PracticeDS_24_print; // Ŭ���� �Լ� ������ pFunc1 ����.

	PracticeDS_24_C_TEST cTest1{}; // cTest1 ��ü ����.
	(cTest1.*pFunc1)(50); // cTest1 ��ü�� Ŭ���� �Լ� ������ pFunc1 ���.


	//practice 2
	int (PracticeDS_24_C_TEST:: * pFunc2)(int, int) {}; // Ŭ���� �Լ� ������ pFunc2 ����.
	pFunc2 = &PracticeDS_24_C_TEST::PracticeDS_24_add; // Ŭ���� �Լ� ������ pFunc2 ����.

	PracticeDS_24_C_TEST cTest2{}; // cTest2 ��ü ����.
	(cTest2.*pFunc1)(100); // cTest2 ��ü�� Ŭ���� �Լ� ������ pFunc1 ���.
	printf("%d\n", (cTest2.*pFunc2)(100, 500)); // cTest2 ��ü�� Ŭ���� �Լ� ������ pFunc2 ���.
}

void PracticeDS_24_C_TEST::PracticeDS_24_print(int nData)
{
	printf("%d\n", nData);
}

int PracticeDS_24_C_TEST::PracticeDS_24_add(int nData1, int nData2)
{
	return nData1 + nData2;
}