#include "PracticeClass_31_moveMgr.h"
#include "PracticeClass_31_fly.h"
#include "PracticeClass_31_swim.h"
#include "PracticeClass_31_walk.h"

PracticeClass_31_move* PracticeClass_31_moveMgr::createMove(E_MOVE eMove)
{
	PracticeClass_31_move* pMove = nullptr;
	switch (eMove)
	{
	case PracticeClass_31_moveMgr::E_MOVE::fly:
		pMove = new PracticeClass_31_fly{};
		break;
	case PracticeClass_31_moveMgr::E_MOVE::swim:
		pMove = new PracticeClass_31_swim{};
		break;
	case PracticeClass_31_moveMgr::E_MOVE::walk:
		pMove = new PracticeClass_31_walk{};
		break;
	}
	return pMove;
}

void PracticeClass_31_moveMgr::deleteMove(PracticeClass_31_move* pMove)
{
	delete pMove;
	pMove = nullptr;
}
