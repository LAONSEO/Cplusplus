// PracticeFunction_ex4.cpp
// �ݺ����� 5�� ������ 0�������� scanf�� �Է¹��� �����͸� ������� �����Ͻÿ�.
// �ݺ����� 3ȸ ������ �Ʊ� ������ �Է��� �κк��� �߰��� scanf�� �Է¹��� �����͸� �����Ͻÿ�.
// �ݺ����� 4ȸ ������ �Ʊ� ������ �Է��� �κк��� �߰��� scanf�� �Է¹��� �����͸� �����Ͻÿ�.


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