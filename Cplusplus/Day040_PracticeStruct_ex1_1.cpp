// PracticeStruct_ex1.cpp : 구조체에 순차적으로 데이터를 넣는 함수. + 구조체 데이터를 순차적으로 출력하는 함수.

#include <iostream>

struct S_DATA
{
    int n1;
    int n2;
    float f1;
};

void setDataToStruct(S_DATA* pData, int nData1, int nDatat2, float fData1);
void printDataFromStruct(const S_DATA* pData);

int main()
{
    S_DATA sTest{};

    setDataToStruct(&sTest, 1, 5, 0.25f);
    printDataFromStruct(&sTest);
}

void setDataToStruct(S_DATA* pData, int nData1, int nDatat2, float fData1)
{
    pData->n1 = nData1;
    pData->n2 = nDatat2;
    pData->f1 = fData1;
}

void printDataFromStruct(const S_DATA* pData)
{
    printf("%d, %d, %f \n", pData->n1, pData->n2, pData->f1);
}