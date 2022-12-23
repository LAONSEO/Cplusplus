// PracticeFunction_ex1.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
// �迭�� �� ���� ���ϴ� �Լ�

#include <iostream>

void calcSumArray(const int* pArray, int nLength, int* pSum); // const �Ⱥ���. �б� �����̸� �ٿ�����.

int main()
{
    int arData[5]{ 5,4,3,2,1 };
    int arDataLength{};
    int arDataSum{};

    arDataLength = 5;

    calcSumArray(arData, arDataLength, &arDataSum);
    printf("%d\n", arDataSum);
}

void calcSumArray(const int* pArray, int nLength, int* pSum)
{
    *pSum = 0; // Ű����Ʈ
    for (int i = 0; i < nLength; i++)
    {
        *pSum += pArray[i];
    }
}