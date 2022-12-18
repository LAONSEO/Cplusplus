// PracticePointer_start4.cpp

#include <iostream>

int main()
{
    int arDataA[2][3]{ {6,5,4}, {3,2,1} };
    int(*pA)[3] {};

    pA = arDataA;

    printf("%d\n", pA);
    printf("%d\n", *pA);
    printf("%d\n", pA[1][2]);
    printf("%d\n", (*pA)[1]);
    printf("%d\n", (*pA)[2]);
    printf("%d\n", *pA[0]);
    printf("%d\n", *pA[1]);



    int ardataB[3]{ 3,2,1 };
    int(*pB)[3] {};

    pB = &ardataB;

    printf("%d\n", pB);
    printf("%d\n", *pB);
    printf("%d\n", **pB);
    printf("%d\n", *((*pB) + 2));



    int arDataC[3]{ 3,2,1 };
    int* pC1;
    int* pC2;

    pC1 = arDataC;
    pC2 = &arDataC[1];

    printf("%d\n", *pC1);
    printf("%d\n", *pC2);

}