#pragma once

#include "PracticeClass_30_move.h"

class PracticeClass_30_duck
{
private:
	PracticeClass_30_move* m_pMove;
public:
	PracticeClass_30_duck() = default;

	void setMove(PracticeClass_30_move* pMove);
	PracticeClass_30_move* getMove();
};