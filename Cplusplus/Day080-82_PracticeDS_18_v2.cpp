// PracticeDS_18.cpp : Binary Search Tree. (type 2)

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>
#include "PracticeDS_18_v2.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	PracticeDS_18_v2_C_BST cBst{};

	cBst.PracticeDS_18_v2_insert(4);
	cBst.PracticeDS_18_v2_insert(2);
	cBst.PracticeDS_18_v2_insert(7);
	cBst.PracticeDS_18_v2_insert(6);
	cBst.PracticeDS_18_v2_insert(9);
	cBst.PracticeDS_18_v2_insert(5);
	cBst.PracticeDS_18_v2_insert(8);
	cBst.PracticeDS_18_v2_insert(1);
	cBst.PracticeDS_18_v2_insert(3);

	cBst.PracticeDS_18_v2_print();

	cBst.PracticeDS_18_v2_erase(4);
	cBst.PracticeDS_18_v2_erase(2);
	cBst.PracticeDS_18_v2_erase(7);
	cBst.PracticeDS_18_v2_erase(6);
	cBst.PracticeDS_18_v2_erase(9);
	cBst.PracticeDS_18_v2_erase(5);

	cBst.PracticeDS_18_v2_erase(8);
	cBst.PracticeDS_18_v2_erase(1);
	cBst.PracticeDS_18_v2_erase(3);

	cBst.PracticeDS_18_v2_print();
}