#pragma once
#include "PracticeClass_26_animal.h"

class PracticeClass_26_C_CAT : public PracticeClass_26_animal
{
	// PracticeClass_26_animal을(를) 통해 상속됨
	virtual void move() override;
	virtual void sound() override;
};