// PracticeStruct_4.cpp : ����ü ���� �迭�� ���� �������� �迭�� �迭�� �����ϴ� �Լ��� �ʿ��ϴ�.

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

    strcpy_s(sData.strName, 64, "ö��");

    printf("�̸� %s\n", sData.strName);
}