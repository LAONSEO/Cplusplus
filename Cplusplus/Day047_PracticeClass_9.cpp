// PracticeClass_9.cpp

#include <iostream>

void func(int(&arData)[5]);

int main()
{
	int arMain1[5] = { 5,4,3,2,1 };
	int arMain2[3] = { 3,2,1 };

	func(arMain1);
	// func(arMain2); // int 5개 짜리만 넣어야 돼, 다른건 들어가지지 않아, 자료형이 정확히 매칭이 되어야한다.
}

void func(int(&arData)[5])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arData[i]);
	}
	printf("\n");
}