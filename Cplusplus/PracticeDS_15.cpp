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
			S_NODE* pDel = pFind;

			if (pFind == m_pBegin)
			{
				m_pBegin = pFind->pNext;
				pFind = m_pBegin;
			}
			else if (pFind == m_pEnd)
			{
				m_pEnd = pUp;
				pFind = pUp;
				pUp->pNext = nullptr;
			}
			else
			{
				pUp->pNext = pFind->pNext;
				pFind = pUp->pNext;
			}
			delete pDel;
		}
		else
		{
			pUp = pFind;
			pFind = pFind->pNext;
		}
	}
}

//void C_LINKEDLIST::PracticeDS_15_remove(int nData)
//{
//	S_NODE* pUp{};
//	S_NODE* pFind = m_pBegin;
//
//	while (pFind)
//	{
//		if (pFind->nData == nData)
//		{
//			S_NODE* pDel = pFind;
//
//			if (pFind == m_pBegin)
//			{
//				m_pBegin = pFind->pNext;
//			}
//			else
//			{
//				pUp->pNext = pFind->pNext;
//				if (pFind == m_pEnd)
//				{
//					m_pEnd = pUp;
//				}
//			}
//			pFind = pFind->pNext;
//			delete pDel;
//		}
//		else
//		{
//			pUp = pFind;
//			pFind = pFind->pNext;
//		}
//	}
//}

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

//void C_LINKEDLIST::PracticeDS_15_clear()
//{
//	S_NODE* pDel{};
//	while (pDel)
//	{
//		S_NODE* pNext = pDel->pNext;
//		delete pDel;
//		pDel = pNext;
//	}
//	m_pBegin = nullptr;
//	m_pEnd = nullptr;
//}