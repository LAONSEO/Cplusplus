// PracticeFunction_start6_return2.cpp
// �� ���� ���ϴ� �Լ� add �� �̿��Ͽ� �� ���� ���� ����� 10�� ���.

#include <iostream>

int add(int nData1, int nData2);

int main()
{
    int nSum{};

    nSum = add(10, 20); // �̷��� ������ ����� �ص־�

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nSum); // ��� 10�� �Ҷ� �ҷ����⸸ �Ѵ�. ���� printf("%d\n", add(10, 20)); �̶�� ������ �ִ� �ڵ��̴�. �ٲ�� ���� ���µ� ���� 1�� ��ų ���� 10�� ��Ű�� ����.
    }
}

int add(int nData1, int nData2)
{
    return nData1 + nData2;
}