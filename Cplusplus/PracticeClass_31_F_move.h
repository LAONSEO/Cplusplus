#pragma once
#include <stdio.h>

__interface I_MOVE
{
	void move();
};

class PracticeClass_31_F_MOVE abstract : public I_MOVE
{
public:
	PracticeClass_31_F_MOVE() = default;
	PracticeClass_31_F_MOVE(const PracticeClass_31_F_MOVE&) = delete;
	PracticeClass_31_F_MOVE& operator=(const PracticeClass_31_F_MOVE&) = delete;
	virtual ~PracticeClass_31_F_MOVE() {};
};