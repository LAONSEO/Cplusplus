
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
    else
    {
        if (nRemainder == 0)
            printf("even.\n");
        else if (nRemainder == 1)
            printf("odd.\n");
    }


}