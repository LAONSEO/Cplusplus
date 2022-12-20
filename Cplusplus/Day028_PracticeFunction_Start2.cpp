// PracticeFunction_start2.cpp

#include <iostream>

void addInt(int nData1, int nData2, int* pData);

int main()
{
    int nData{};
    int nTotal{};

    nData = 90;

    addInt(nData, 11, &nData);
    printf("%d\n", nData);
}

void addInt(int nData1, int nData2, int* pData)
{
    *pData = nData1 + nData2;
}