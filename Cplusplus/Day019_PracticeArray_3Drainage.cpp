// PracticeArray_3Drainage.cpp

#include <iostream>

int main()
{
    int arData[10]{};
    int nData{};

    for (int i = 0; i < 10; i++)
    {
        nData = i * 3;
        nData += 3;
        arData[i] = nData;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arData[i]);
    }
}