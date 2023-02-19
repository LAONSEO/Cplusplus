// PracticeClass_31.cpp : memory manager 2

#include <iostream>
#include "PracticeClass_31_moveMgr.h"

int main()
{
	PracticeClass_31_moveMgr cMoveMgr{};
	PracticeClass_31_move* pMove{};

	pMove = cMoveMgr.createMove(PracticeClass_31_moveMgr::E_MOVE::fly);
	pMove->move();

	pMove = cMoveMgr.createMove(PracticeClass_31_moveMgr::E_MOVE::swim);
	pMove->move();

	pMove = cMoveMgr.createMove(PracticeClass_31_moveMgr::E_MOVE::walk);
	pMove->move();

	cMoveMgr.deleteMove(pMove);
	pMove = nullptr;
}