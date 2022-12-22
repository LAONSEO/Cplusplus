// PracticeFunction_start5_arrary.cpp

#include <iostream>

void printData(const int* pData, int nLength);

int main()
{
    int arData[5]{ 5,4,3,2,1 };

    printData(arData, 5);
    printf("%d\n", arData[0]);

}

void printData(const int* pData, int nLength)
{
    for (int i = 0; i < nLength; i++)
    {
        printf("%d ", pData[i]);
    }
    printf("\n");
}

///

//void printData(int arData[5]);
//
//int main()
//{
//    int arData[5]{ 5,4,3,2,1 };
//
//    printData(arData);
//    printf("%d\n", arData[0]);
//
//}
//
//void printData(int arData[5])
//{
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arData[i]);
//    }
//    printf("\n");
//    arData[0] = 99;
//}
