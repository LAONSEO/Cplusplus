#pragma once

class PracticeDS_14_C_LINKEDLIST
{
private:
	struct S_NODE
	{
		int nData;

		S_NODE* pNext;
	};

private:
	S_NODE* m_pBegin;
	S_NODE* PracticeDS_14_createNode(int nData);

public:
	C_LINKEDLIST() = default;
	C_LINKEDLIST(const C_LINKEDLIST&) = delete;
	C_LINKEDLIST& operator=(const C_LINKEDLIST&) = delete;

	void PracticeDS_14_pushBack(int nData);
	void PracticeDS_14_printData();
};
