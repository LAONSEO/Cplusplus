#include "PracticeClass_17.h"

int PracticeClass_17::operator+(int nData)
{
    return m_nData + nData;
}

int PracticeClass_17::operator+=(int nData)
{
    return m_nData += nData;
}

void PracticeClass_17::setData(int nData)
{
    m_nData = nData;
}
