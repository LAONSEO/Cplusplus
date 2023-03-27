#pragma once
#include <iostream>

__interface PracticeDS_21_C_BASE_INTERFACE
{
	void PracticeDS_21_printName();
	int PracticeDS_21_getCost();
};

class PracticeDS_21_C_BASE abstract : public PracticeDS_21_C_BASE_INTERFACE
{
protected:
	char m_strName[64];
	int m_nCost;

public:
	PracticeDS_21_C_BASE() = default;
	virtual ~PracticeDS_21_C_BASE();
	PracticeDS_21_C_BASE(const PracticeDS_21_C_BASE&) = delete;
	PracticeDS_21_C_BASE& operator+=(const PracticeDS_21_C_BASE&) = delete;

	virtual void PracticeDS_21_printName() override;
	virtual int PracticeDS_21_getCost() override;
};
