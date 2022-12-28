// PracticeFunction_start8.cpp

#include <iostream>

int add(int nData1, int nData2);
float add(float fData1, float fData2);
//int add(float fData1, float fData2); // 인수만 같고 리턴이 다른 경우 : 같은 인수를 쓰는 같은 이름 함수인데 리턴을 뭘로 줄지 모른다.
//int add(int nData1 = 5, int nData2); // 디폴트 인수를 잘못 준 경우

int main()
{
    printf("%d\n", add(10, 20));
    printf("%f\n", add(5.0f, 2.2f));
}

int add(int nData1, int nData2)
{
    return nData1 + nData2;
}

float add(float fData1, float fData2)
{
    return fData1 + fData2;
}