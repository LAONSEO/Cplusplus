// PracticeDS_18.cpp : Binary Search Tree. (type 1)

#include <iostream>
#include "PracticeDS_18.h"

int main()
{
	PracticeDS_18_C_BST cBst{};

	cBst.PracticeDS_18_insert(3);
	cBst.PracticeDS_18_insert(7);
	cBst.PracticeDS_18_insert(1);
	cBst.PracticeDS_18_insert(6);
	cBst.PracticeDS_18_insert(4);
	cBst.PracticeDS_18_insert(2);
	cBst.PracticeDS_18_insert(5);

	cBst.PracticeDS_18_print();
}