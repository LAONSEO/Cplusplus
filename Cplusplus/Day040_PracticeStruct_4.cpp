// PracticeStruct_4.cpp : 구조체 내부 배열에 값을 넣으려면 배열에 배열을 복사하는 함수가 필요하다.

#include <iostream>

struct S_DATA
{
    char strName[64];
    int nKor;
    int nEng;
    int nMath;
    int nTotal;
    float fAvg;
};

int main()
{
    S_DATA sData{};

    strcpy_s(sData.strName, 64, "철수");

    printf("이름 %s\n", sData.strName);
}