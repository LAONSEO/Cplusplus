#include <iostream>

class PracticeClass_21
{
private:
	int m_nData;

public:
	PracticeClass_21() = default;
	PracticeClass_21(int nData);
	//PracticeClass_21(const PracticeClass_21&) = delete;
	PracticeClass_21& operator=(const PracticeClass_21&) = delete;

	void setData(int nData);
	int getData() const;

	PracticeClass_21 operator++();
	const PracticeClass_21 operator++(int);
};

int main()
{
	int nData{};
	printf("%d\n", nData);

	++nData;
	printf("%d\n", nData);
	nData++;
	printf("%d\n", nData);
}

PracticeClass_21::PracticeClass_21(int nData) : 
	m_nData{}
{
	setData(nData);
}

void PracticeClass_21::setData(int nData)
{
	m_nData = nData;
}

int PracticeClass_21::getData() const
{
	return m_nData;
}

PracticeClass_21 PracticeClass_21::operator++()
{
	m_nData++;
	return *this;
}

const PracticeClass_21 PracticeClass_21::operator++(int)
{
	int nBackup = m_nData;
	m_nData++;

	return PracticeClass_21(nBackup);
}