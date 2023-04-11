#pragma once

#include "PracticeDS_35_student.h"
#include <map>
#include <string>

class PracticeDS_35_C_STUDENTMGR
{
private:
	std::map<std::string, PracticeDS_35_C_STUDENT*> m_mapStudent;
public:
	PracticeDS_35_C_STUDENTMGR() = default;
	PracticeDS_35_C_STUDENT* createStudent(const char* strName);
	void erase(const char* strName);
	void printOneStudent(const char* strName);
	void printAllStudent();
	void clear();
};