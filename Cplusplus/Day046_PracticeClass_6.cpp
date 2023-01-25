// PracticeClass_6.cpp

#include <iostream>

class C_DATA
{
private:
    int m_nData;

public:
    C_DATA() = default;
    void init(int nData);
    void setData(int nData);
    int getData();
};

int main()
{
    C_DATA cData{};

    cData.init(10); // 생성타이밍. // 사용준비가 끝났다.

    cData.getData();

    printf("%d\n ", cData.getData());
}

void C_DATA::init(int nData)
{
    setData(nData);
}
void C_DATA::setData(int nData)
{
    m_nData = nData;
}
int C_DATA::getData()
{
    return m_nData;
}