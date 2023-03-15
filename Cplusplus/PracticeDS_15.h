#pragma once

class PracticeDS_15_C_LINKEDLIST
{
private:
	struct S_NODE
	{
		int nData;

		S_NODE* pNext;
	};

private:
	S_NODE* m_pBegin;
	S_NODE* m_pEnd;

private:
	S_NODE* PracticeDS_15_createNode(int nData);

public:
	PracticeDS_15_C_LINKEDLIST() = default;
	PracticeDS_15_C_LINKEDLIST(const PracticeDS_15_C_LINKEDLIST&) = delete;
	PracticeDS_15_C_LINKEDLIST& operator=(const PracticeDS_15_C_LINKEDLIST&) = delete;

	void PracticeDS_15_pushBack(int nData);
	void PracticeDS_15_remove(int nData);
	void PracticeDS_15_printData();
	//void PracticeDS_15_clear();
};