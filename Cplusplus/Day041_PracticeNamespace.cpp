#include <iostream>

namespace N_CALCULATION
{
    int add(int nData1, int nData2);
    int mul(int nData1, int nData2);
}

using namespace N_CALCULATION; // namespace 없으면 안돼, 목차까지 만들어놨는데 굳이 목차 없앤다고?
using namespace std; // C++ 언어 표준 구문 없애고 편하게 쓰는 사람도 있다던데 이것도 굳이?

int mul(int nData1, int nData2);

int main()
{
    N_CALCULATION::add(10, 20);
    N_CALCULATION::mul(10, 20); // 네임스페이스 안과 밖에 mul 이름이 겹칠 때, 네임스페이스 안에 있는 놈 부를 때.
    ::mul(10, 20); // 네임스페이스 안과 밖에 mul 이름이 겹칠 때, 네임스페이스 밖에 있는 놈 부를 때.
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
    printf("네임스페이스 없음\n");
    return nData1 * nData2;
}