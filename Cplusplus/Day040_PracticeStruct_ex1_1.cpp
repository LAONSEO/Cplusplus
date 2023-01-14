// PracticeStruct_ex1.cpp : ����ü�� ���������� �����͸� �ִ� �Լ�. + ����ü �����͸� ���������� ����ϴ� �Լ�.

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