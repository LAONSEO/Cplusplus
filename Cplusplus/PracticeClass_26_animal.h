#pragma once
#include <stdio.h>

__interface PracticeClass_26_animal_INTERFACE
{
	void move();
	void sound();
};

class PracticeClass_26_animal abstract : public PracticeClass_26_animal_INTERFACE
{
public:
	PracticeClass_26_animal() = default;
	PracticeClass_26_animal(const PracticeClass_26_animal&) = delete;
	PracticeClass_26_animal& operator=(const PracticeClass_26_animal&) = delete;
	virtual ~PracticeClass_26_animal() {};
};