#include "PracticeDS_21_deco.h"

PracticeDS_21_C_DECO::PracticeDS_21_C_DECO(PracticeDS_21_C_BASE* pBase) :
    PracticeDS_21_C_DECO(pBase)
{
    m_pBase = pBase;
}

PracticeDS_21_C_DECO::~PracticeDS_21_C_DECO()
{
    delete m_pBase;
    m_pBase = nullptr;
}

void PracticeDS_21_C_DECO::printName()
{
    m_pBase->printName();
    PracticeDS_21_C_BASE::printName();
}

int PracticeDS_21_C_DECO::getCost()
{
    return m_pBase->getCost() + PracticeDS_21_C_BASE::getCost();
}
