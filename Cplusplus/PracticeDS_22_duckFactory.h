#pragma once
#include "PracticeDS_22_duck.h"

class PracticeDS_22_C_DUCKFACTORY abstract
{
public:
	virtual ~PracticeDS_22_C_DUCKFACTORY() {};
public:
	virtual PracticeDS_22_C_DUCK* PracticeDS_22_createDuck() abstract;
};

class C_DUCKFACTORY_TYPE_A : public PracticeDS_22_C_DUCKFACTORY
{
	// C_DUCKFACTORY을(를) 통해 상속됨
	virtual PracticeDS_22_C_DUCK* PracticeDS_22_createDuck() override;
};
class C_DUCKFACTORY_TYPE_B : public PracticeDS_22_C_DUCKFACTORY
{
	// C_DUCKFACTORY을(를) 통해 상속됨
	virtual PracticeDS_22_C_DUCK* PracticeDS_22_createDuck() override;
};
class C_DUCKFACTORY_TYPE_C : public PracticeDS_22_C_DUCKFACTORY
{
	// C_DUCKFACTORY을(를) 통해 상속됨
	virtual PracticeDS_22_C_DUCK* PracticeDS_22_createDuck() override;
};