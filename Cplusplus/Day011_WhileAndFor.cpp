
#include <iostream>

int main()
{
	int nInput{};
	int nCount{};
	int nFinalCount{};

	printf("If you enter the number, 'Test' is printed N times.\n");
	scanf_s("%d", &nInput);

	nFinalCount = nInput; // ���⼭ ��� nFinalCount ������ ��� ������, ���� ���� �� ������ �ݺ����� ������ �ľ��� �����ϱ� �����̴�.

	//nCount = 0;
	//while (nCount < nFinalCount)
	//{
	//	printf("Test\n");
	//	nCount++;
	//}

	for (nCount = 0; nCount < nFinalCount; nCount++)
		printf("Test\n");


	// ������ ������� ����� �ٸ� ������ ������ ���� �ʴ� �ٴ� �����Ͽ�, Nȸ �ܼ� �ݺ� ��ų ���� for�� �̿��Ѵ�.

}