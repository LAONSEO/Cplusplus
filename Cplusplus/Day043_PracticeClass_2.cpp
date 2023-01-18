#include <iostream>
#include "Day043_PracticeClass_2.h"

int main()
{
	Day043_PracticeClass_2 cData{};

	cData.setData(100);

	printf("%d\n", cData.getData());
}

void Day043_PracticeClass_2::setData(int nData)
{
	Day043_PracticeClass_2::m_nData = nData;
}

int Day043_PracticeClass_2::getData()
{
	return m_nData;
}