#pragma once
#include <stdio.h>

__interface PracticeClass_29_move_INTERFACE
{
	void move();
};

class PracticeClass_29_move : public PracticeClass_29_move_INTERFACE
{
public:
	virtual ~PracticeClass_29_move() {};
};