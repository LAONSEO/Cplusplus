#pragma once

#include <stdio.h>
#include <string>

class PracticeDS_35_C_STUDENT
{
private:
	int m_nGrade;
	std::string m_strName;
	std::string m_strAddress;
	std::string m_strClass;
public:
	PracticeDS_35_C_STUDENT() = default;
	PracticeDS_35_C_STUDENT(const PracticeDS_35_C_STUDENT&) = delete;
	void init(int nGrade, const char* strAddress, const char* strClass);
	void print();
};
