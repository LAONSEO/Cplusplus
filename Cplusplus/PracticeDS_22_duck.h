#pragma once

#include "PracticeDS_22_move.h"
#include "PracticeDS_22_sound.h"

class PracticeDS_22_C_DUCK
{
private:
	PracticeDS_22_C_MOVE* m_pMove;
	PracticeDS_22_C_SOUND* m_pSound;
public:
	PracticeDS_22_C_DUCK() = default;
	void init(PracticeDS_22_C_MOVE* pMove, PracticeDS_22_C_SOUND* pSound);
	PracticeDS_22_C_MOVE* PracticeDS_22_getMove();
	PracticeDS_22_C_SOUND* PracticeDS_22_getSound();

	void PracticeDS_22_release();
};