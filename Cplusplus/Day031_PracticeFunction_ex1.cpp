// PracticeFunction_ex1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 배열의 총 합을 구하는 함수

#include <iostream>

void calcSumArray(const int* pArray, int nLength, int* pSum); // const 안붙임. 읽기 전용이면 붙여주자.

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
    *pSum = 0; // 키포인트
    for (int i = 0; i < nLength; i++)
    {
        *pSum += pArray[i];
    }
}