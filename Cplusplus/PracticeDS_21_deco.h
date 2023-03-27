#pragma once
#include "PracticeDS_21_base.h"

class PracticeDS_21_C_DECO abstract : public PracticeDS_21_C_BASE
{
protected:
	PracticeDS_21_C_BASE* m_pBase;

public:
	PracticeDS_21_C_DECO(PracticeDS_21_C_BASE* pBase);
	virtual ~PracticeDS_21_C_DECO();

	// PracticeDS_21_C_BASE을(를) 통해 상속됨
	virtual void printName() override;
	virtual int getCost() override;
};
