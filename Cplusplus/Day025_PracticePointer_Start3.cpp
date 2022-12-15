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

    pData = &arData[2]; // ������ ���� []�� �ּҰ��� ������ �����Ѵ�. - ���⼭�� 2�� ������ 0 ,1, 2 �̷���.
    printf("%d\n", *pData); // 3
}