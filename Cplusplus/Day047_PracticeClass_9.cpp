// PracticeClass_9.cpp

#include <iostream>

void func(int(&arData)[5]);

int main()
{
	int arMain1[5] = { 5,4,3,2,1 };
	int arMain2[3] = { 3,2,1 };

	func(arMain1);
	// func(arMain2); // int 5�� ¥���� �־�� ��, �ٸ��� ������ �ʾ�, �ڷ����� ��Ȯ�� ��Ī�� �Ǿ���Ѵ�.
}

void func(int(&arData)[5])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arData[i]);
	}
	printf("\n");
}