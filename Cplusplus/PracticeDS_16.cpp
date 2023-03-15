#include <stdio.h>
#include "PracticeDS_16.h"

PracticeDS_16_C_LINKEDLIST::S_NODE* PracticeDS_16_C_LINKEDLIST::PracticeDS_16_createNode(int nData)
{
    S_NODE* pNew = new S_NODE{};

    pNew->nData = nData;
    pNew->pNext = nullptr;

    return pNew;
}

PracticeDS_16_C_LINKEDLIST::PracticeDS_16_C_LINKEDLIST() :
    m_pBegin{},
    m_ppEnd{}
{
    m_ppEnd = &m_pBegin;
}

void PracticeDS_16_C_LINKEDLIST::PracticeDS_16_pushBack(int nData)
{
    *m_ppEnd = PracticeDS_16_createNode(nData);
    m_ppEnd = &(*m_ppEnd)->pNext;
}

void PracticeDS_16_C_LINKEDLIST::PracticeDS_16_remove(int nData)
{
    S_NODE** ppFind = &m_pBegin;

    while (*ppFind)
    {
        if ((*ppFind)->nData == nData)
        {
            S_NODE* pDel = *ppFind;
            *ppFind = (*ppFind)->pNext;
            delete pDel;
        }
        else
        {
            ppFind = &(*ppFind)->pNext;
        }
        m_ppEnd = ppFind;
    }
}

void PracticeDS_16_C_LINKEDLIST::PracticeDS_16_printData()
{
    S_NODE* pPrint = m_pBegin;

    while (pPrint)
    {
        printf("%d ", pPrint->nData);
        pPrint = pPrint->pNext;
    }
    printf("\n");
}
