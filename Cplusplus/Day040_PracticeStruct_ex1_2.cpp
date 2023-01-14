// PracticeStruct_ex1_another.cpp : 구조체에 순차적으로 데이터를 넣는 함수 어나더 타입.

#include <iostream>

struct S_DATA
{
    int nData1;
    int nData2;
    float fData1;
};

S_DATA setData(int nData1, int nData2, float fData1);

int main()
{
    S_DATA sData{};

    sData = setData(10, 20, 0.5f);

    printf("%d\n", sData.nData1);
    printf("%d\n", sData.nData2);
    printf("%f\n", sData.fData1);
}

S_DATA setData(int nData1, int nData2, float fData1)
{
    S_DATA sData{ nData1, nData2, fData1 };
    return sData;
}