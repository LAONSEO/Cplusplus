#pragma once
#include "PracticeClass_30_move.h"

class PracticeClass_30_fly : public PracticeClass_30_move
{
	// PracticeClass_30_move을(를) 통해 상속됨
	virtual void move() override;
};