// PracticePointer_Start2.cpp

#include <iostream>

int main()
{
	int arData[5]{ 5,4,3,2,1 };
	int* pData1{};

	pData1 = &arData[3];

	printf("%d\n", *pData1); // 2
	printf("%d\n", *pData1 + 1); // 3
	printf("%d\n", *(pData1 + 1)); // 1


	int nData{};
	int* pData2{};

	nData = 99;

	pData2 = &nData;

	printf("\n%d", *pData2); // 99
	printf("\n%d", *pData2 + 1); // 100
	printf("\n%d", *(pData2 + 1)); // -858993460 ?? 경로에 1을 더한 값에 접근했다 -> 잘못된 메모리에 접근했다?

}