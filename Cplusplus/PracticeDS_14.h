#pragma once

class C_LINKEDLIST
{
private:
	struct S_NODE
	{
		int nData;

		S_NODE* pNext;
	};

private:
	S_NODE* m_pBegin;
	S_NODE* createNode(int nData);

public:
	C_LINKEDLIST() = default;
	C_LINKEDLIST(const C_LINKEDLIST&) = delete;
	C_LINKEDLIST& operator=(const C_LINKEDLIST&) = delete;

	void pushBack(int nData);
	void printData();
};
