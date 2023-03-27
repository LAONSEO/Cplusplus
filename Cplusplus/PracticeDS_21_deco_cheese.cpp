#include "PracticeDS_21_deco_cheese.h"

PracticeDS_21_C_CHEESE::PracticeDS_21_C_CHEESE(PracticeDS_21_C_BASE* pBase) :
	PracticeDS_21_C_DECO(pBase)
{
	strcpy_s(m_strName, 64, "ДЎБо");
	m_nCost = 100;
}