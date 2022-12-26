// PracticeFunction_start6_return2.cpp
// 두 수를 더하는 함수 add 를 이용하여 두 수를 더한 결과를 10번 출력.

#include <iostream>

int add(int nData1, int nData2);

int main()
{
    int nSum{};

    nSum = add(10, 20); // 이렇게 변수에 백업을 해둬야

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nSum); // 출력 10번 할때 불러오기만 한다. 만약 printf("%d\n", add(10, 20)); 이라면 문제가 있는 코딩이다. 바뀌는 것이 없는데 일을 1번 시킬 것을 10번 시키기 때문.
    }
}

int add(int nData1, int nData2)
{
    return nData1 + nData2;
}