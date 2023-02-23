// PracticeDS_6.cpp

#include <iostream>

void calSum(int nData, int& nSum);

int main()
{
    int nResult{};
    calSum(5, nResult);

    printf("%d\n", nResult);
}

void calSum(int nData, int& nSum)
{
    if (nData == 0)
        return;

    calSum(nData - 1, nSum);
    nSum += nData;
}