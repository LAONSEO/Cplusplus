// PracticeClass_20.cpp

#include <iostream>

class C_DATA
{
private:
    int m_nData1;
    int m_nData2;
    int m_nAddResult;
public:
    C_DATA() = default;
    C_DATA(const C_DATA&) = delete;
    C_DATA& operator=(const C_DATA&) = delete;

    void setData(int nData1, int nData2);
    void calAddData();
    int getData();
};

int main()
{
    C_DATA cTest{};

    cTest.setData(10, 20);
    cTest.calAddData();

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", cTest.getData());
    }
}

void C_DATA::setData(int nData1, int nData2)
{
    m_nData1 = nData1;
    m_nData2 = nData2;
}

void C_DATA::calAddData()
{
    m_nAddResult = m_nData1 + m_nData2;
}

int C_DATA::getData()
{
    return m_nAddResult;
}