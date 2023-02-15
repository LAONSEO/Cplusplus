#include <iostream>

class PracticeClass_28_TEST
{
private:
	int m_nData;

public:
	PracticeClass_28_TEST(int nData) { m_nData = nData; };
	int getData() { return m_nData; };
};

class PracticeClass_28_PRINT
{
private:
	PracticeClass_28_TEST* m_pTest;
public:
	PracticeClass_28_PRINT() = default;
	void init(int nData) { m_pTest = new PracticeClass_28_TEST(nData); };
	void print() { printf("%d\n", m_pTest->getData()); };
	void release() 
	{
		delete m_pTest;
		m_pTest = nullptr;
	};
};

int main()
{
	PracticeClass_28_PRINT cPrint{};

	cPrint.init(10);
	cPrint.print();
	cPrint.release();
}