// PracticeClass_11.cpp

#include <iostream>

int main()
{
	int* p1{};
	int* p2{};
	int* p3{};

	p1 = new int{};

	p2 = p1;
	p3 = p1;

	*p2 = 100;

	printf("*p1 : %d\n", *p1);
	printf("*p3 : %d\n", *p3);

	printf("���� p1 %X\n", p1);
	printf("���� p2 %X\n", p2);
	printf("���� p3 %X\n", p3);

	delete p1;

	printf("���� p1 %X\n", p1);
	printf("���� p2 %X\n", p2);
	printf("���� p3 %X\n", p3);
}