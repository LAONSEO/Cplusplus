// PracticeFunction_ex4.cpp
// 반복문을 5번 돌려서 0번지부터 scanf로 입력받은 데이터를 순서대로 저장하시오.
// 반복문을 3회 돌려서 아까 마지막 입력한 부분부터 추가로 scanf로 입력받은 데이터를 저장하시오.
// 반복문을 4회 돌려서 아까 마지막 입력한 부분부터 추가로 scanf로 입력받은 데이터를 저장하시오.


#include <iostream>

bool setDataInArray(int* pArray, int nArrayLength, int nOffset, int nInputCount, int nInputArrayLength);

int main()
{
	int arData[10]{};
	int arDataLength(10);

	setDataInArray(arData, arDataLength, 0, 5, 5);
	setDataInArray(arData, arDataLength, 5, 3, 3);
	if (setDataInArray(arData, arDataLength, 8, 4, 4))
	{
		printf("ture");
	}
	else
	{
		printf("false");
	}

	for (int i = 0; i < arDataLength; i++)
	{
		printf("%d ", arData[i]);
	}

}

bool setDataInArray(int* pArray, int nArrayLength, int nOffset, int nInputCount, int nInputArrayLength)
{
	int nInputData{};

	int nIndex = 0;
	if (nOffset + nInputArrayLength > nArrayLength)
	{
		return false;
	}
	else
	{
		while (nIndex < nInputCount && nOffset + nInputArrayLength <= nArrayLength)
		{
			scanf_s("%d", &nInputData);

			*(pArray + nOffset + nIndex) = nInputData;
			nIndex++;
		}
	}
	return true;
}