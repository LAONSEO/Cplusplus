#include "PracticeDS_35_studentMgr.h"

PracticeDS_35_C_STUDENT* PracticeDS_35_C_STUDENTMGR::createStudent(const char* strName)
{
	std::map<std::string, PracticeDS_35_C_STUDENT*>::iterator iterFind = m_mapStudent.find(strName);

	if (iterFind != m_mapStudent.end())
		return nullptr;

	PracticeDS_35_C_STUDENT* pStudent = new PracticeDS_35_C_STUDENT{};

	m_mapStudent.insert(iterFind, { strName, pStudent });

	return pStudent;
}

void PracticeDS_35_C_STUDENTMGR::erase(const char* strName)
{
	std::map<std::string, PracticeDS_35_C_STUDENT*>::iterator iterFind = m_mapStudent.find(strName);

	if (iterFind == m_mapStudent.end())
		return;

	delete iterFind->second;
	m_mapStudent.erase(iterFind);
}

void PracticeDS_35_C_STUDENTMGR::printOneStudent(const char* strName)
{
	std::map<std::string, PracticeDS_35_C_STUDENT*>::iterator iterFind = m_mapStudent.find(strName);

	if (iterFind == m_mapStudent.end())
		return;

	printf("이름 %s ", iterFind->first.c_str());
	iterFind->second->print();
}

void PracticeDS_35_C_STUDENTMGR::printAllStudent()
{
	std::map<std::string, PracticeDS_35_C_STUDENT*>::iterator iter = m_mapStudent.begin();

	while (iter != m_mapStudent.end())
	{
		printf("이름 %s ", iter->first.c_str());
		iter->second->print();
		iter++;
	}
}

void PracticeDS_35_C_STUDENTMGR::clear()
{
	std::map<std::string, PracticeDS_35_C_STUDENT*>::iterator iter = m_mapStudent.begin();

	while (iter != m_mapStudent.end())
	{
		delete iter->second;
		iter++;
	}
	m_mapStudent.clear();
}