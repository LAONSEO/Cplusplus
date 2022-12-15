// Day025_PracticePointer_Start3.cpp

#include <iostream>

int main()
{
    int arData[5]{ 5,4,3,2,1 };
    int nData{};
    int* pData{};

    nData = 100;

    pData = &nData;
    printf("%d\n", *pData); // 100

    pData = &arData[3];
    printf("%d\n", *pData); // 2

    pData = arData;
    printf("%d\n", *pData); // 5

    pData = arData + 2;
    printf("%d\n", *pData); // 3

    pData = &arData[2]; // 포인터 뒤의 []는 주소값의 증가를 참조한다. - 여기서는 2가 증가함 0 ,1, 2 이렇게.
    printf("%d\n", *pData); // 3
}