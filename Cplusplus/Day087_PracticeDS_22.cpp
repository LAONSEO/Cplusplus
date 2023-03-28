// 0328_1.cpp : factory method pattern.

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>

#include "PracticeDS_22_factoryMgr.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	PracticeDS_22_C_FACTORYMGR cMgr{};
	PracticeDS_22_C_DUCK* pDuck{};

	cMgr.PracticeDS_22_init();

	pDuck = cMgr.PracticeDS_22_createDuck(PracticeDS_22_C_FACTORYMGR::E_DUCKTYPE::TYPE_B);
	pDuck->PracticeDS_22_getMove()->move();
	pDuck->PracticeDS_22_getSound()->play();

	cMgr.PracticeDS_22_remove(pDuck);

	cMgr.PracticeDS_22_release();
}