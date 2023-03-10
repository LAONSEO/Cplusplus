// PracticeDS_15.cpp : Linked List. (2nd)

#include <iostream>
#include "PracticeDS_15.h"

int main()
{
	C_LINKEDLIST cList{};

	cList.PracticeDS_15_pushBack(1);
	cList.PracticeDS_15_pushBack(2);
	cList.PracticeDS_15_pushBack(3);
	cList.PracticeDS_15_pushBack(4);
	cList.PracticeDS_15_pushBack(5);

	cList.PracticeDS_15_remove(3);

	cList.PracticeDS_15_printData();
}