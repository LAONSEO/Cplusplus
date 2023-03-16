#include "PracticeDS_17_linkedlist.h"

C_NODE* PracticeDS_17_C_LINKEDLIST::PracticeDS_17_createNode(int nData)
{
	C_NODE* pNew = new C_NODE{};

	pNew->m_nData = nData;

	return pNew;
}

void PracticeDS_17_C_LINKEDLIST::PracticeDS_17_insertNode(C_NODE* pPriv, C_NODE* pNext, C_NODE* pInsert)
{
	//pInsert->m_pPriv = pPriv;
	//pInsert->m_pNext = pNext;
	//pPriv->m_pNext = pInsert;
	//pNext->m_pPriv = pInsert;
	PracticeDS_17_linkNode(pPriv, pInsert);
	PracticeDS_17_linkNode(pInsert, pNext);
}

void PracticeDS_17_C_LINKEDLIST::PracticeDS_17_linkNode(C_NODE* pPriv, C_NODE* pNext)
{
	pPriv->m_pNext = pNext;
	pNext->m_pPriv = pPriv;
}

PracticeDS_17_C_LINKEDLIST::PracticeDS_17_C_LINKEDLIST() :
	m_pBegin{},
	m_pEnd{},
	m_cBeginDummy{},
	m_cEndDummy{}
{
	m_pBegin = &m_cBeginDummy;
	m_pEnd = &m_cEndDummy;

	PracticeDS_17_linkNode(m_pBegin, m_pEnd);
	//m_pBegin->m_pNext = m_pEnd;
	//m_pEnd->m_pPriv = m_pBegin;
}

void PracticeDS_17_C_LINKEDLIST::PracticeDS_17_pushBack(int nData)
{
	PracticeDS_17_insertNode(m_pEnd->m_pPriv, m_pEnd, PracticeDS_17_createNode(nData));
}

void PracticeDS_17_C_LINKEDLIST::PracticeDS_17_pushFront(int nData)
{
	PracticeDS_17_insertNode(m_pBegin, m_pBegin->m_pNext, PracticeDS_17_createNode(nData));
}

void PracticeDS_17_C_LINKEDLIST::PracticeDS_17_eraseNode(C_NODE* pErase)
{
	PracticeDS_17_linkNode(pErase->m_pPriv, pErase->m_pNext);
	delete pErase;
}

C_NODE* PracticeDS_17_C_LINKEDLIST::PracticeDS_17_popBack()
{
	C_NODE* pExtract = m_pEnd->m_pPriv;

	m_pEnd->m_pPriv = pExtract->m_pPriv;
	pExtract->m_pPriv->m_pNext = m_pEnd;
	delete pExtract;

	return pExtract;
}

C_NODE* PracticeDS_17_C_LINKEDLIST::PracticeDS_17_popFront()
{
	C_NODE* pExtract = m_pBegin->m_pNext;

	m_pBegin->m_pNext = pExtract->m_pNext;
	pExtract->m_pNext->m_pPriv = m_pBegin;
	delete pExtract;

	return pExtract;
}

C_NODE* PracticeDS_17_C_LINKEDLIST::PracticeDS_17_getBegin()
{
	return m_pBegin->m_pNext;
}

C_NODE* PracticeDS_17_C_LINKEDLIST::PracticeDS_17_getEnd()
{
	return m_pEnd;
}
