// FibonacciNumbers

#include <iostream>

int main()
{
    int nNumberA{};
    int nNumberB{};
    int nNumberFibonacci{};
    int nCount{};
    int nInput{};

    printf("Enter the number of total.\n");
    scanf_s("%d", &nInput);

    nNumberA = 0;
    nNumberB = 1;

    nCount = 0;
    while (nCount < nInput)
    {
        nNumberFibonacci = nNumberA + nNumberB;
        printf("%d\n", nNumberFibonacci);

        nNumberA = nNumberB;
        nNumberB = nNumberFibonacci;

        nCount++;

    }


}