//When two specific numbers are entered, Calculate up to 10 decimal places.
//(However, all data types are 'int'.)

#include <iostream>

int main()
{
    int nNumber1{};
    int nNumber2{};
    int nShare{};
    int nRemainder{};
    int nRemainderToNumber1{};
    int nCount{};

    printf("Enter the 1st Number\n");
    scanf_s("%d", &nNumber1);

    printf("Enter the 2nd Number\n");
    scanf_s("%d", &nNumber2);

    nCount = 0;
    while (nCount < 5)
    {
        nShare = nNumber1 / nNumber2;
        printf("%d", nShare);

        nRemainder = nNumber1 % nNumber2;
        nRemainderToNumber1 = nRemainder * 10;

        nNumber1 = nRemainderToNumber1;

        nCount++;
    }

}