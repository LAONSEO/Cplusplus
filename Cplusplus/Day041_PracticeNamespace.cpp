#include <iostream>

namespace N_CALCULATION
{
    int add(int nData1, int nData2);
    int mul(int nData1, int nData2);
}

using namespace N_CALCULATION; // namespace ������ �ȵ�, �������� �������µ� ���� ���� ���شٰ�?
using namespace std; // C++ ��� ǥ�� ���� ���ְ� ���ϰ� ���� ����� �ִٴ��� �̰͵� ����?

int mul(int nData1, int nData2);

int main()
{
    N_CALCULATION::add(10, 20);
    N_CALCULATION::mul(10, 20); // ���ӽ����̽� �Ȱ� �ۿ� mul �̸��� ��ĥ ��, ���ӽ����̽� �ȿ� �ִ� �� �θ� ��.
    ::mul(10, 20); // ���ӽ����̽� �Ȱ� �ۿ� mul �̸��� ��ĥ ��, ���ӽ����̽� �ۿ� �ִ� �� �θ� ��.
}

int N_CALCULATION::add(int nData1, int nData2)
{
    return nData1 + nData2;
}

int N_CALCULATION::mul(int nData1, int nData2)
{
    printf("N_CALCULATION\n");
    return nData1 * nData2;
}

int mul(int nData1, int nData2)
{
    printf("���ӽ����̽� ����\n");
    return nData1 * nData2;
}