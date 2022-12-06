// PracticeArray_EvenSum_OddAverage.cpp

#include <iostream>

int main()
{
    int arData[10]{ 15,21,8,41,62,84,52,13,27,4 };
    int nRemainder{};
    int nEvenSum{};
    int nOddSum{};
    int nOddCount{};
    float fOddAverage{};

    for (int i = 0; i < 10; i++)
    {
        nRemainder = arData[i] % 2;

        if (nRemainder == 0)
        {
            nEvenSum += arData[i];
        }

        else if (nRemainder == 1)
        {
            nOddSum += arData[i];
            nOddCount++;

            fOddAverage = (float)nOddSum / (float)nOddCount;
        }
    }

    printf("%d\n", nEvenSum);
    printf("%.2f\n", fOddAverage);

}