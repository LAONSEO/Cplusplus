// PracticeFunction_Start2_ex1.cpp : 두 수를 입력받아 작은 수를 출력하고 그 작은 수가 짝수인지 홀수인지 출력하시오.
// 단, 작은 수 출력과 홀짝 구분은 각각 함수기능으로 구현할 것.

#include <iostream>

void printNumMin(int nData1, int nData2, int* pFunctionNumMin);
void printEvenOdd(int nData3);

int main()
{
    int nNumberScan1{};
    int nNumberScan2{};
    int nNumberMinimum{};
    int* pNumberMinimum{};

    printf("1번째 숫자를 입력하세요.\n");
    scanf_s("%d", &nNumberScan1);
    printf("2번째 숫자를 입력하세요.\n");
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

    printf("\n작은 수는 %d 입니다.\n", *pFunctionNumMin);
}

void printEvenOdd(int nData3)
{
    int nRemainderEven{};

    nRemainderEven = nData3 % 2;

    if (nRemainderEven == 0)
    {
        printf("\n작은 수는 Even.\n");
    }
    else if (nRemainderEven != 0)
    {
        printf("\n작은 수는 Odd.\n");
    }
}