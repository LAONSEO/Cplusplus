#pragma once

class PracticeDS_20_C_SINGLETON
{
private:
	int m_nData;
	static PracticeDS_20_C_SINGLETON* m_pInstance;

private:
	PracticeDS_20_C_SINGLETON() = default;

public:
	static PracticeDS_20_C_SINGLETON* PracticeDS_20_C_SINGLETON_getInstance();
	static void PracticeDS_20_C_SINGLETON_createInstance();
	static void PracticeDS_20_C_SINGLETON_releaseInstance();

	void PracticeDS_20_C_SINGLETON_setData(int nData);
	int PracticeDS_20_C_SINGLETON_getData();
};