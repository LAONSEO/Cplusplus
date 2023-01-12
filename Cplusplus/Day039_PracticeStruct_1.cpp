// PracticeStruct_1.cpp

#include <iostream>

struct S_DATA
{
    int nData;
    float fData;
};

int main()
{
    S_DATA sData{};

    sData.nData = 100;
    sData.fData = 0.5111f;

    printf("%d\n", sData.nData);
    printf("%f\n", sData.fData);
}


// Same above, C style code.
//#include <stdio.h>
//
//typedef struct _s_data
//{
//    int nData;
//    float fData;
//
//}S_DATA;
//
//int main()
//{
//    S_DATA sData;
//
//    sData.nData = 100;
//
//    printf("%d\n", sData.nData);
//}