// PracticeArray_Type1_2.cpp

#include <iostream>

int main()
{
    int arData[10]{};
    int nEvenIndex{};
    int nEven{};


    for (int i = 0; i < 10; i++)
    {
        arData[nEvenIndex] = nEven;
        nEven += 2;
        nEvenIndex++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arData[i]);
    }
}