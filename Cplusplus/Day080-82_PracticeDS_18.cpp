// PracticeDS_18.cpp : Binary Search Tree. (type 1)

//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>

#include <iostream>
#include "PracticeDS_18.h"

int main()
{
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	PracticeDS_18_C_BST cBst{};

	cBst.PracticeDS_18_insert(4);
	cBst.PracticeDS_18_insert(2);
	cBst.PracticeDS_18_insert(7);
	cBst.PracticeDS_18_insert(6);
	cBst.PracticeDS_18_insert(9);
	cBst.PracticeDS_18_insert(5);
	cBst.PracticeDS_18_insert(8);
	cBst.PracticeDS_18_insert(1);
	cBst.PracticeDS_18_insert(3);

	cBst.PracticeDS_18_print();
	cBst.PracticeDS_18_erase(4);
	cBst.PracticeDS_18_print();

	////memory check
	//cBst.PracticeDS_18_insert(4);
	//cBst.PracticeDS_18_insert(2);
	//cBst.PracticeDS_18_insert(7);
	//cBst.print();
	//cBst.PracticeDS_18_erase(4);
	//cBst.PracticeDS_18_erase(2);
	//cBst.PracticeDS_18_erase(7);
	//cBst.print();
}