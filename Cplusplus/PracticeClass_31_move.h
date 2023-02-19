#pragma once
#include <stdio.h>

__interface PracticeClass_31_move_INTERFACE
{
	void move();
};

class PracticeClass_31_move abstract : public PracticeClass_31_move_INTERFACE
{
private:
public:
	PracticeClass_31_move() = default;
	PracticeClass_31_move(const PracticeClass_31_move&) = delete;
	PracticeClass_31_move& operator= (const PracticeClass_31_move&) = delete;
	virtual ~PracticeClass_31_move() {};
};