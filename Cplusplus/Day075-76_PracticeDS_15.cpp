// PracticeDS_15.cpp : Linked List. (2nd)

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>
#include "PracticeDS_15.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	C_LINKEDLIST cList{};

	//cList.PracticeDS_15_pushBack(1);
	//cList.PracticeDS_15_pushBack(2);
	//cList.PracticeDS_15_pushBack(3);
	//cList.PracticeDS_15_pushBack(4);
	//cList.PracticeDS_15_pushBack(5);

	//cList.PracticeDS_15_remove(3);

	cList.PracticeDS_15_pushBack(3);
	cList.PracticeDS_15_remove(3);

	cList.PracticeDS_15_printData();
}