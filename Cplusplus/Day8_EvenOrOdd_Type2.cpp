
#include <iostream>

int main()
{
    int nInput{};
    int nRemainder{};

    printf("Enter a Number.\n");
    scanf_s("%d", &nInput);

    nRemainder = nInput % 2;

    if (nInput == 0)
        printf("Unable to determine.\n");
    if (nInput != 0 && nRemainder == 0)
        printf("Even.\n");
    if (nInput != 0 && nRemainder == 1)
        printf("Odd.\n");

}