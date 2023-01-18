#include <iostream>

class C_TEST
{
private:
    int nData;

public:
    void setData(int nData);
    int getData();
};

int main()
{
    C_TEST cTest1{};
    C_TEST cTest2{};

    cTest1.setData(100);
    cTest2.setData(50);

    printf("%d, %d\n", cTest1.getData(), cTest2.getData());
}

void C_TEST::setData(int nData)
{
    C_TEST::nData = nData;
}

int C_TEST::getData()
{
    return nData;
}