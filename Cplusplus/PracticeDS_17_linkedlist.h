#pragma once
#include "PracticeDS_17_node.h"

class PracticeDS_17_C_LINKEDLIST
{
private:
	C_NODE* m_pBegin;
	C_NODE* m_pEnd;
	C_NODE m_cBeginDummy;
	C_NODE m_cEndDummy;

private:
	C_NODE* PracticeDS_17_createNode(int nData);
	void PracticeDS_17_insertNode(C_NODE* pPriv, C_NODE* pNext, C_NODE* pInsert);
	void PracticeDS_17_linkNode(C_NODE* pPriv, C_NODE* pNext);

public:
	PracticeDS_17_C_LINKEDLIST();
	PracticeDS_17_C_LINKEDLIST(const PracticeDS_17_C_LINKEDLIST&) = delete;
	PracticeDS_17_C_LINKEDLIST& operator=(const PracticeDS_17_C_LINKEDLIST&) = delete;

	void PracticeDS_17_pushBack(int nData);
	void PracticeDS_17_pushFront(int nData);

	void PracticeDS_17_eraseNode(C_NODE* pErase);

	C_NODE* PracticeDS_17_popBack();
	C_NODE* PracticeDS_17_popFront();

	C_NODE* PracticeDS_17_getBegin();
	C_NODE* PracticeDS_17_getEnd();
};