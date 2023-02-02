// PracticeClass_19.cpp

#include <iostream>

class C_DATA
{
private:
    int m_nData;
public:
    C_DATA& operator=(const C_DATA& cInput);
};

int main()
{
    C_DATA c1{};
    C_DATA c2{};
    C_DATA c3{};

    c1 = c2 = c3;
}

C_DATA& C_DATA::operator=(const C_DATA& cInput)
{
    m_nData = cInput.m_nData;

    return *this;
}