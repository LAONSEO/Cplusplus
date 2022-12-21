// PracticeFunction_start3.cpp

#include <iostream>

int main()
{
	int* p{}; // �⺻���� ������ ������ ���� ���� ����

	int nData1(101);
	int nData2(102);
	int nData3(103);

	const int* p1(&nData1);
	int const* p2(&nData2);
	int* const p3(&nData3);

	//*p1 = 51; // *ptr ��ü�� const ��Ų �Ŷ� �� ��ü�� �ٲ� �� ����.
	//*p2 = 52; // *ptr ��ü�� const ��Ų �Ŷ� �� ��ü�� �ٲ� �� ����.
	*p3 = 53; // *p3 ���� ���� �� �ִ�.

	p1 = &nData2; // �ּҴ� const ���� �ƴϹǷ�, �ּҸ� �����Ͽ� ���� ������ �� �ִ�.
	p2 = &nData3; // �ּҴ� const ���� �ƴϹǷ�, �ּҸ� �����Ͽ� ���� ������ �� �ִ�.
	//p3 = &nData1; // �ּҰ� const ���̹Ƿ�, �ּ� ������ �Ұ��������� �� �ּҿ� ����� �ִ� *p3�� ���� ���� ������ �����ϴ�.

	printf("%d\n", *p1);
	printf("%d\n", *p2);
	printf("%d\n", *p3);
}