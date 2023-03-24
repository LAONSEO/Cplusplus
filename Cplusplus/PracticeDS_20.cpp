#include "PracticeDS_20.h"

PracticeDS_20_C_SINGLETON* PracticeDS_20_C_SINGLETON::m_pInstance = nullptr;

PracticeDS_20_C_SINGLETON* PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_getInstance()
{
	return m_pInstance;
}

void PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_createInstance()
{
	if (!m_pInstance)
		m_pInstance = new PracticeDS_20_C_SINGLETON{};
}

void PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_releaseInstance()
{
	if (m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

void PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_setData(int nData)
{
	m_nData = nData;
}

int PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_getData()
{
	return m_nData;
}