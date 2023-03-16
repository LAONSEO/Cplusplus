#include <stdio.h>
#include "PracticeDS_14.h"

PracticeDS_14_C_LINKEDLIST::S_NODE* PracticeDS_14_C_LINKEDLIST::PracticeDS_14_createNode(int nData)
{
    S_NODE* pNew = new S_NODE{};

    pNew->nData = nData;
    pNew->pNext = nullptr;

    return pNew;
}

void PracticeDS_14_C_LINKEDLIST::PracticeDS_14_pushBack(int nData)
{
    if (!m_pBegin)
    {
        m_pBegin = PracticeDS_14_createNode(nData);
        return;
    }

    S_NODE* pFind = m_pBegin;

    while (pFind->pNext)
    {
        pFind = pFind->pNext;
    }
    pFind->pNext = PracticeDS_14_createNode(nData);
}

void PracticeDS_14_C_LINKEDLIST::PracticeDS_14_printData()
{
    S_NODE* pPrint = m_pBegin;

    while (pPrint)
    {
        printf("%d ", pPrint->nData);
        pPrint = pPrint->pNext;
    }
    printf("\n");
}
