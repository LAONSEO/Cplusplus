#pragma once
#include "PracticeDS_22_duckFactory.h"

class PracticeDS_22_C_FACTORYMGR
{
public:
	enum class E_DUCKTYPE
	{
		TYPE_A = 0,
		TYPE_B,
		TYPE_C,
		TYPE_MAX
	};
private:
	PracticeDS_22_C_DUCKFACTORY* m_arFactory[(int)E_DUCKTYPE::TYPE_MAX];
	PracticeDS_22_C_DUCK* m_pDuck;
public:
	PracticeDS_22_C_FACTORYMGR() = default;
	void PracticeDS_22_init();
	PracticeDS_22_C_DUCK* PracticeDS_22_createDuck(E_DUCKTYPE eType);
	void PracticeDS_22_release();
	void PracticeDS_22_remove(PracticeDS_22_C_DUCK*& pDuck);
};