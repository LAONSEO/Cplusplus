#include "PracticeDS_35_student.h"

void PracticeDS_35_C_STUDENT::print()
{
	printf("주소 %s, 학과 %s, 등급 %d\n", m_strAddress.c_str(), m_strClass.c_str(), m_nGrade);
}

void PracticeDS_35_C_STUDENT::init(int nGrade, const char* strAddress, const char* strClass)
{
	m_strAddress = strAddress;
	m_strClass = strClass;
	m_nGrade = nGrade;
}