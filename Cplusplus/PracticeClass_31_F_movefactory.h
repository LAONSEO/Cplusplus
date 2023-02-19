#pragma once

#include "PracticeClass_31_F_move.h"

class PracticeClass_31_F_MOVEFACTORY_SUPER abstract
{
public:
	virtual PracticeClass_31_F_MOVE* createMove() abstract;
	virtual ~PracticeClass_31_F_MOVEFACTORY_SUPER() {};
};

class PracticeClass_31_F_MOVEFACTORY_FLY : public PracticeClass_31_F_MOVEFACTORY_SUPER
{
public:
	// PracticeClass_31_F_MOVEFACTORY_SUPER을(를) 통해 상속됨
	virtual PracticeClass_31_F_MOVE* createMove() override;
};

class PracticeClass_31_F_MOVEFACTORY_SWIM : public PracticeClass_31_F_MOVEFACTORY_SUPER
{
public:
	// PracticeClass_31_F_MOVEFACTORY_SUPER을(를) 통해 상속됨
	virtual PracticeClass_31_F_MOVE* createMove() override;
};

class PracticeClass_31_F_MOVEFACTORY_WALK : public PracticeClass_31_F_MOVEFACTORY_SUPER
{
public:
	// PracticeClass_31_F_MOVEFACTORY_SUPER을(를) 통해 상속됨
	virtual PracticeClass_31_F_MOVE* createMove() override;
};