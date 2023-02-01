#pragma once

class PracticeClass_17
{
private:
	int m_nData;

public:
	int operator+(int nData);
	int operator+= (int nData);
	void setData(int nData);
};