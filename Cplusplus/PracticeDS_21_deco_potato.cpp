#include "PracticeDS_21_deco_potato.h"

PracticeDS_21_C_POTATO::PracticeDS_21_C_POTATO(PracticeDS_21_C_BASE* pBase) :
	PracticeDS_21_C_DECO(pBase)
{
	strcpy_s(m_strName, 64, "°¨ÀÚ");
	m_nCost = 200;
}