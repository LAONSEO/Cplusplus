#include <stdio.h>
#include "PracticeDS_15.h"

C_LINKEDLIST::S_NODE* C_LINKEDLIST::PracticeDS_15_createNode(int nData)
{
	S_NODE* pNew = new S_NODE{};

	pNew->nData = nData;
	pNew->pNext = nullptr;

	return pNew;
}

void C_LINKEDLIST::PracticeDS_15_pushBack(int nData)
{
	S_NODE* pNew = PracticeDS_15_createNode(nData);

	if (!m_pBegin)
	{
		m_pBegin = pNew; // m_pBegin = createNode(nData);
		m_pEnd = pNew; // m_pBegin
		return;
	}
	m_pEnd->pNext = pNew; // m_pEnd->pNext = createNode(nData);
	m_pEnd = pNew; // m_pEnd = m_pEnd->pNext;
}

void C_LINKEDLIST::PracticeDS_15_remove(int nData)
{
	S_NODE* pFind = m_pBegin;
	S_NODE* pUp{};

	while (pFind)
	{
		if (pFind->nData == nData)
		{
			pUp->pNext = pFind->pNext;
			delete pFind;
			pFind = pUp->pNext;
		}
		else
		{
			pUp = pFind;
			pFind = pFind->pNext;
		}
	}
}

void C_LINKEDLIST::PracticeDS_15_printData()
{
	S_NODE* pPrint = m_pBegin;
	while (pPrint)
	{
		printf("%d ", pPrint->nData);
		pPrint = pPrint->pNext;
	}
	printf("\n");
}