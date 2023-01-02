
#include <iostream>

bool setDataInArray(int* pArray, int nArrayLength, int nOffset, int nInputCount, int nInputArrayLength);

int main()
{
	int arData[10]{};
	int arDataLength(10);

	setDataInArray(arData, arDataLength, 0, 5, 5);
	setDataInArray(arData, arDataLength, 5, 3, 3);
	if (setDataInArray(arData, arDataLength, 8, 2, 2))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arData[i]);
	}
}

bool setDataInArray(int* pArray, int nArrayLength, int nOffset, int nInputCount, int nInputArrayLength)
{
	int nInputData{};

	int nIndex = 0;
	while (nIndex < nInputCount)
	{
		if (nOffset + nIndex > nArrayLength)
		{
			return false;
		}
		scanf_s("%d", &nInputData);

		*(pArray + nOffset + nIndex) = nInputData;
		nIndex++;
	}
	return true;
}