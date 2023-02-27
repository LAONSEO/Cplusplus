// PracticeDS_7.cpp

#include <iostream>

bool getFibonacci(int nData, int& nResult);

int main()
{
    int nResult{};

    getFibonacci(4, nResult);

    printf("%d\n", nResult);
}

bool getFibonacci(int nIndex, int& nResult)
{
    if (nIndex < 0)
    {
        return false;
    }

    if (nIndex == 0 || nIndex == 1)
    {
        nResult = 1;
        return true;
    }

    int nResult1{};
    int nResult2{};

    getFibonacci(nIndex - 2, nResult2);
    getFibonacci(nIndex - 1, nResult1);

    nResult = nResult1 + nResult2;
    
    return true;
}