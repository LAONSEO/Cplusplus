#include "PracticeClass_15.h"
#include <iostream>

PracticeClass_15::PracticeClass_15() :
    m_pData{}
{
    m_pData = new int{};
}

PracticeClass_15::~PracticeClass_15()
{
    printf("소멸자호출\n");
    delete m_pData;
}

void PracticeClass_15::setData(int nData)
{
    *m_pData = nData;
}

int PracticeClass_15::getData()
{
    return *m_pData;
}