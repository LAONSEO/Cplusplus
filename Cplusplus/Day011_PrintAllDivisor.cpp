
#include <iostream>

int main()
{
    int nNumberInput{};
    int nNumberRemainder{};
    int nNumberStart{};

    printf("Enter the number.\n");
    scanf_s("%d", &nNumberInput);

    nNumberStart = 1;
    while (nNumberStart <= nNumberInput)
    {
        nNumberRemainder = nNumberInput % nNumberStart;

        if (nNumberRemainder == 0)
            printf("%d\n", nNumberStart);

        nNumberStart++;

    }

}