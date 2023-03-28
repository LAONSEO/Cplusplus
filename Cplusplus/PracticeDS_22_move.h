#pragma once
#include <iostream>

class PracticeDS_22_C_MOVE abstract
{
public:
	virtual ~PracticeDS_22_C_MOVE() {};
public:
	virtual void move() abstract;
};

class PracticeDS_22_C_MOVE_WALK : public PracticeDS_22_C_MOVE
{
public:
	// C_MOVE을(를) 통해 상속됨
	virtual void move() override;
};
class PracticeDS_22_C_MOVE_FLY : public PracticeDS_22_C_MOVE
{
public:
	// C_MOVE을(를) 통해 상속됨
	virtual void move() override;
};
class PracticeDS_22_C_MOVE_SWIM : public PracticeDS_22_C_MOVE
{
	// C_MOVE을(를) 통해 상속됨
	virtual void move() override;
};