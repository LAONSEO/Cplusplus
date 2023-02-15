#include <iostream>

class PracticeClass_1_C_TEST
{
private:
    int m_nData;

public:
    void setData(int nData);
    int getData();
};

int main()
{
    PracticeClass_1_C_TEST cTest1{};
    PracticeClass_1_C_TEST cTest2{};

    cTest1.setData(100);
    cTest2.setData(50);

    printf("%d, %d\n", cTest1.getData(), cTest2.getData());
}

void PracticeClass_1_C_TEST::setData(int nData)
{
    PracticeClass_1_C_TEST::m_nData = nData;
}

int PracticeClass_1_C_TEST::getData()
{
    return m_nData;
}