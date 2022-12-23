// PracticeFunction_ex3.cpp
// 두 변수의 내용을 바꿔주는 함수

#include <iostream>

void swapData(int* pDst, int* pSrc);

int main()
{
    int nData1(100);
    int nData2(200);

    printf("%d\n", nData1);
    printf("%d\n", nData2);

    swapData(&nData1, &nData2);

    printf("%d\n", nData1);
    printf("%d\n", nData2);
}

void swapData(int* pDst, int* pSrc)
{
    int nBowl = *pDst;
    *pDst = *pSrc;
    *pSrc = nBowl;
}