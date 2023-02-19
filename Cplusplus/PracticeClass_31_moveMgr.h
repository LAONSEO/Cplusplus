#pragma once

#include "PracticeClass_31_move.h"

class PracticeClass_31_moveMgr
{
private:
	PracticeClass_31_move* m_pMoveMgr;
public:
	enum class E_MOVE
	{
		NONE,
		fly,
		swim,
		walk
	};
	PracticeClass_31_move* createMove(E_MOVE eMove);
	void deleteMove(PracticeClass_31_move* pMove);
};
