#pragma once

class PracticeDS_16_C_LINKEDLIST
{
private:
	struct S_NODE
	{
		int nData;
		S_NODE* pNext;
	};

private:
	S_NODE* m_pBegin;
	S_NODE** m_ppEnd;

private:
	S_NODE* PracticeDS_16_createNode(int nData);

public:
	PracticeDS_16_C_LINKEDLIST();
	PracticeDS_16_C_LINKEDLIST(const PracticeDS_16_C_LINKEDLIST&) = delete;
	PracticeDS_16_C_LINKEDLIST& operator=(const PracticeDS_16_C_LINKEDLIST&) = delete;
	void PracticeDS_16_pushBack(int nData);
	void PracticeDS_16_remove(int nData);
	void PracticeDS_16_printData();
};