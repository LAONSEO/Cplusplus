#include <stdio.h>
#include "PracticeDS_18_v2.h"

void PracticeDS_18_v2_C_BST::PracticeDS_18_v2_printNode(S_NODE* pNode)
{
	if (!pNode)
		return;

	printf("%d ", pNode->nData);

	PracticeDS_18_v2_printNode(pNode->pLeft);
	PracticeDS_18_v2_printNode(pNode->pRight);
}

// *find (�ݺ��� ���·� �� ��� ����ڰ� ���� ���� ppFind �� ���� �ǹ��� ���� �� �ֱ⿡ �ִ� ��Ʈ)
PracticeDS_18_v2_C_BST::S_NODE** PracticeDS_18_v2_C_BST::PracticeDS_18_v2_findNode(S_NODE** ppNode, int nData)
{
	//S_NODE** ppFind = &m_pRoot;

	//while (*ppFind && (*ppFind)->nData != nData)
	//{
	//    if ((*ppFind)->nData > nData)
	//        ppFind = &(*ppFind)->pLeft;

	//    else if ((*ppFind)->nData < nData)
	//        ppFind = &(*ppFind)->pRight;
	//}
	//return ppFind;

	//if (!*ppNode || (*ppNode)->nData == nData) // Ŭ �� ó���ϰ� ���� �� ó���ϸ� ���� �� ���� �Ŵϱ�.
	if (!*ppNode)
		return ppNode;

	if ((*ppNode)->nData > nData)
		return PracticeDS_18_v2_findNode(&(*ppNode)->pLeft, nData);
	if ((*ppNode)->nData < nData)
		return PracticeDS_18_v2_findNode(&(*ppNode)->pRight, nData);

	return ppNode;
}

PracticeDS_18_v2_C_BST::S_NODE* PracticeDS_18_v2_C_BST::PracticeDS_18_v2_createNode(int nData)
{
	S_NODE* pNew = new S_NODE{};

	pNew->nData = nData;
	pNew->pLeft = nullptr;
	pNew->pRight = nullptr;

	return pNew;
}

void PracticeDS_18_v2_C_BST::PracticeDS_18_v2_print()
{
	PracticeDS_18_v2_printNode(m_pRoot);
	printf("\n");
}

bool PracticeDS_18_v2_C_BST::PracticeDS_18_v2_insert(int nData)
{
	S_NODE** ppFind = PracticeDS_18_v2_findNode(&m_pRoot, nData);

	if (*ppFind)
		return false;

	*ppFind = PracticeDS_18_v2_createNode(nData);

	return true;
}

void PracticeDS_18_v2_C_BST::PracticeDS_18_v2_erase(int nData)
{
	S_NODE** ppFind = PracticeDS_18_v2_findNode(&m_pRoot, nData);
	if (!*ppFind)
		return;

	if (!(*ppFind)->pLeft && !(*ppFind)->pRight)
	{
		delete* ppFind;
		*ppFind = nullptr;
	}
	else if ((*ppFind)->pLeft && (*ppFind)->pRight)
	{
		S_NODE** ppFindNext = &(*ppFind)->pLeft;

		if ((*ppFindNext)->pLeft && !(*ppFindNext)->pRight)
		{
			(*ppFind)->nData = (*ppFindNext)->nData;

			S_NODE* pBackup = *ppFindNext;
			(*ppFind)->pLeft = (*ppFindNext)->pLeft;

			delete pBackup;
		}
		else if (!(*ppFindNext)->pLeft && (*ppFindNext)->pRight)
		{
			(*ppFind)->nData = (*ppFindNext)->nData;

			S_NODE* pBackup = *ppFindNext;
			(*ppFind)->pLeft = (*ppFindNext)->pRight;

			delete pBackup;
		}
		else
		{
			while ((*ppFindNext)->pRight)
			{
				ppFindNext = &(*ppFindNext)->pRight;
			}
			(*ppFind)->nData = (*ppFindNext)->nData;
			delete* ppFindNext;
			*ppFindNext = nullptr;
		}
	}
	else if ((*ppFind)->pLeft && !(*ppFind)->pRight)
	{
		S_NODE* pNext = (*ppFind)->pLeft;
		delete* ppFind;
		*ppFind = pNext;
	}
	else if (!(*ppFind)->pLeft && (*ppFind)->pRight)
	{
		S_NODE* pNext = (*ppFind)->pRight;
		delete* ppFind;
		*ppFind = pNext;
	}
}