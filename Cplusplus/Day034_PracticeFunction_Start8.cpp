// PracticeFunction_start8.cpp

#include <iostream>

int add(int nData1, int nData2);
float add(float fData1, float fData2);
//int add(float fData1, float fData2); // �μ��� ���� ������ �ٸ� ��� : ���� �μ��� ���� ���� �̸� �Լ��ε� ������ ���� ���� �𸥴�.
//int add(int nData1 = 5, int nData2); // ����Ʈ �μ��� �߸� �� ���

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