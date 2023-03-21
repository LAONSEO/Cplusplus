#pragma once

class PracticeDS_18_v2_C_BST
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
	void PracticeDS_18_v2_printNode(S_NODE* pNode);
	S_NODE** PracticeDS_18_v2_findNode(S_NODE** ppNode, int nData);
	S_NODE* PracticeDS_18_v2_createNode(int nData);

public:
	PracticeDS_18_v2_C_BST() = default;
	void PracticeDS_18_v2_print();
	bool PracticeDS_18_v2_insert(int nData);
	void PracticeDS_18_v2_erase(int nData);
};