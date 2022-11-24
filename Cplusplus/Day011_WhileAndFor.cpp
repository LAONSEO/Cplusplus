
#include <iostream>

int main()
{
	int nInput{};
	int nCount{};
	int nFinalCount{};

	printf("If you enter the number, 'Test' is printed N times.\n");
	scanf_s("%d", &nInput);

	nFinalCount = nInput; // 여기서 사실 nFinalCount 변수는 없어도 되지만, 굳이 만들어서 쓴 이유는 반복문을 객관적 파악을 용이하기 위함이다.

	//nCount = 0;
	//while (nCount < nFinalCount)
	//{
	//	printf("Test\n");
	//	nCount++;
	//}

	for (nCount = 0; nCount < nFinalCount; nCount++)
		printf("Test\n");


	// 구문의 변수들과 결과가 다른 지역에 영향을 주지 않는 다는 가정하에, N회 단순 반복 시킬 때만 for문 이용한다.

}