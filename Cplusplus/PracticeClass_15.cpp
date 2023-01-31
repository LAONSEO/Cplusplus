#include "PracticeClass_15.h"
#include <iostream>

C_DATA::C_DATA() :
    m_pData{}
{
    m_pData = new int{};
}

C_DATA::~C_DATA()
{
    printf("소멸자호출\n");
    delete m_pData;
}

void C_DATA::setData(int nData)
{
    *m_pData = nData;
}

int C_DATA::getData()
{
    return *m_pData;
}