// PracticePoiniter_Start5.cpp

#include <iostream>

int main()
{
    int arData[2][3]{ {6,5,4},{3,2,1} };
    int(*p)[3] {};

    p = arData;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", *(*(p + i) + j));
        }
        printf("\n");
    }

    printf("%d\n", *(*(p + 1)));
    printf("%d\n", *((*p) + 1));
}