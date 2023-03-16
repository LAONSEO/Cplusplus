// PracticeDS_17.cpp : Linked List (Real).

#include <iostream>
#include "PracticeDS_17_linkedlist.h"

void printList(C_NODE* pBegin, C_NODE* pEnd);

int main()
{
	PracticeDS_17_C_LINKEDLIST cList{};

	cList.PracticeDS_17_pushBack(1);
	cList.PracticeDS_17_pushBack(2);
	cList.PracticeDS_17_pushBack(3);
	cList.PracticeDS_17_pushBack(4);
	cList.PracticeDS_17_pushBack(5);
	cList.PracticeDS_17_pushFront(99);
	cList.PracticeDS_17_pushFront(98);
	cList.PracticeDS_17_pushFront(97);

	//cList.PracticeDS_17_popBack();
	//cList.PracticeDS_17_popFront();

	printList(cList.PracticeDS_17_getBegin(), cList.PracticeDS_17_getEnd());

	C_NODE* pNode = cList.PracticeDS_17_getBegin();

	while (pNode != cList.PracticeDS_17_getEnd())
	{
		C_NODE* pNodeNext = pNode->PracticeDS_17_getNext();

		if (pNode->PracticeDS_17_getData() >= 5)
		{
			cList.PracticeDS_17_eraseNode(pNode);
		}
		pNode = pNodeNext;
	}

	printList(cList.PracticeDS_17_getBegin(), cList.PracticeDS_17_getEnd());
}

void printList(C_NODE* pBegin, C_NODE* pEnd)
{
	for (C_NODE* pNode = pBegin; pNode != pEnd; pNode = pNode->PracticeDS_17_getNext())
	{
		printf("%d ", pNode->PracticeDS_17_getData());
	}
	printf("\n");
}