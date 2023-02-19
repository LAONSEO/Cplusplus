#pragma once
#include "PracticeClass_31_move.h"

class PracticeClass_31_walk : public PracticeClass_31_move
{
	// PracticeClass_31_move을(를) 통해 상속됨
	virtual void move() override;
};