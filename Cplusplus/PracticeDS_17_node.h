#pragma once

class PracticeDS_17_C_LINKEDLIST;

class C_NODE
{
	friend PracticeDS_17_C_LINKEDLIST;

private:
	int m_nData;

	C_NODE* m_pPriv;
	C_NODE* m_pNext;

public:
	C_NODE() = default;
	C_NODE(const C_NODE&) = delete;
	C_NODE& operator=(const C_NODE&) = delete;

	C_NODE* PracticeDS_17_getNext();
	int PracticeDS_17_getData();
};