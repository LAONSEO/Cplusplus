#pragma once

class PracticeDS_18_C_BST
{
private:
	struct S_NODE
	{
		int nData;

		S_NODE* pLeft;
		S_NODE* pRight;
	};

private:
	S_NODE* m_pRoot;

private:
	void PracticeDS_18_printNode(S_NODE* pNode);
	S_NODE** PracticeDS_18_findNode(S_NODE** ppNode, int nData);
	S_NODE* PracticeDS_18_createNode(int nData);

public:
	PracticeDS_18_C_BST() = default;
	void PracticeDS_18_print();
	bool PracticeDS_18_insert(int nData);
	void PracticeDS_18_erase(int nData);
	bool PracticeDS_18_find(int nData);
};