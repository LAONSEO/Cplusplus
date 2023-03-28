#include "PracticeDS_22_factoryMgr.h"

void PracticeDS_22_C_FACTORYMGR::PracticeDS_22_init()
{
    m_arFactory[(int)E_DUCKTYPE::TYPE_A] = new C_DUCKFACTORY_TYPE_A{};
    m_arFactory[(int)E_DUCKTYPE::TYPE_B] = new C_DUCKFACTORY_TYPE_B{};
    m_arFactory[(int)E_DUCKTYPE::TYPE_C] = new C_DUCKFACTORY_TYPE_C{};
}

PracticeDS_22_C_DUCK* PracticeDS_22_C_FACTORYMGR::PracticeDS_22_createDuck(E_DUCKTYPE eType)
{
    return m_arFactory[(int)eType]->PracticeDS_22_createDuck();
}

void PracticeDS_22_C_FACTORYMGR::PracticeDS_22_release()
{
	for (int i = 0; i < (int)E_DUCKTYPE::TYPE_MAX; i++)
	{
		if (m_arFactory[i])
			delete m_arFactory[i];
		m_arFactory[i] = nullptr;
	}
}

void PracticeDS_22_C_FACTORYMGR::PracticeDS_22_remove(PracticeDS_22_C_DUCK*& pDuck)
{
	pDuck->PracticeDS_22_release();
	delete pDuck;
	pDuck = nullptr;
}
