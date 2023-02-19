#pragma once
#include "PracticeClass_31_F_move.h"
#include "PracticeClass_31_F_movefactory.h"

class PracticeClass_31_F_moveMgr
{
public:
	enum class E_MOVE
	{
		NONE,
		FLY,
		SWIM,
		WALK,
		E_MOVE_MAX
	};
	PracticeClass_31_F_MOVE* createMove(E_MOVE eMove);
	void deleteMove(PracticeClass_31_F_MOVE*& pMove);

	void init();
	void release();

private:
	PracticeClass_31_F_MOVE* m_pMoveMgr;
	PracticeClass_31_F_MOVEFACTORY_SUPER* m_arFactory[(int)E_MOVE::E_MOVE_MAX];
};