// PracticeClass_31_Factory.cpp

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>
#include "PracticeClass_31_F_moveMgr.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	PracticeClass_31_F_moveMgr cMoveMgr{};
	PracticeClass_31_F_MOVE* pMove1{};
	PracticeClass_31_F_MOVE* pMove2{};
	PracticeClass_31_F_MOVE* pMove3{};
	PracticeClass_31_F_MOVE* pMove4{};

	cMoveMgr.init();

	pMove1 = cMoveMgr.createMove(PracticeClass_31_F_moveMgr::E_MOVE::FLY);
	pMove1->move();

	pMove2 = cMoveMgr.createMove(PracticeClass_31_F_moveMgr::E_MOVE::SWIM);
	pMove2->move();

	pMove3 = cMoveMgr.createMove(PracticeClass_31_F_moveMgr::E_MOVE::FLY);
	pMove3->move();

	pMove4 = cMoveMgr.createMove(PracticeClass_31_F_moveMgr::E_MOVE::WALK);
	pMove4->move();

	cMoveMgr.release();
}