// PracticeFunction_Start2_ex1.cpp : �� ���� �Է¹޾� ���� ���� ����ϰ� �� ���� ���� ¦������ Ȧ������ ����Ͻÿ�.
// ��, ���� �� ��°� Ȧ¦ ������ ���� �Լ�������� ������ ��.

#include <iostream>

void printNumMin(int nData1, int nData2, int* pFunctionNumMin);
void printEvenOdd(int nData3);

int main()
{
    int nNumberScan1{};
    int nNumberScan2{};
    int nNumberMinimum{};
    int* pNumberMinimum{};

    printf("1��° ���ڸ� �Է��ϼ���.\n");
    scanf_s("%d", &nNumberScan1);
    printf("2��° ���ڸ� �Է��ϼ���.\n");
    scanf_s("%d", &nNumberScan2);

    pNumberMinimum = &nNumberMinimum;

    printNumMin(nNumberScan1, nNumberScan2, &nNumberMinimum);
    printEvenOdd(*pNumberMinimum);
}

void printNumMin(int nData1, int nData2, int* pFunctionNumMin)
{
    *pFunctionNumMin = nData1;
    if (nData2 < nData1)
    {
        *pFunctionNumMin = nData2;
    }

    printf("\n���� ���� %d �Դϴ�.\n", *pFunctionNumMin);
}

void printEvenOdd(int nData3)
{
    int nRemainderEven{};

    nRemainderEven = nData3 % 2;

    if (nRemainderEven == 0)
    {
        printf("\n���� ���� Even.\n");
    }
    else if (nRemainderEven != 0)
    {
        printf("\n���� ���� Odd.\n");
    }
}