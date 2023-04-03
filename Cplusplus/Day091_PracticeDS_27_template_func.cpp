// PracticeDS_27_template_func.cpp

#include <iostream>

template<int nT>
void func_nData(int nData);

template<int nLength>
void func_arData(int(&arData)[nLength]);

int main()
{
    func_nData<1>(100);


    int arData1[3] = { 3,2,1 };
    int arData2[7] = { 7,6,5,4,3,2,1 };
    int arData3[1] = { 10 };

    func_arData<3>(arData1);
    func_arData<7>(arData2);
    func_arData<1>(arData3);
}

template<int nT>
void func_nData(int nData)
{
    printf("nT : %d\n", nT);
    printf("nData : %d\n ", nData);
}

template<int nLength>
void func_arData(int(&arData)[nLength])
{
    for (int i = 0; i < nLength; i++)
    {
        printf("%d ", arData[i]);
    }
    printf("\n");
}