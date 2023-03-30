// PracticeDS_25.cpp : class function pointer (this pointer).

class PracticeDS_25_C_TEST
{
public:
	enum class E_TYPE
	{
		E_ADD,
		E_MUL,
		E_DIV,
		E_MAX
	};
private:
	int m_nData1;
	int m_nData2;
	int m_nResult;

	void (PracticeDS_25_C_TEST::* m_arFunc[(int)E_TYPE::E_MAX])();

public:
	void PracticeDS_25_add();
	void PracticeDS_25_mul();
	void PracticeDS_25_div();
public:
	PracticeDS_25_C_TEST();
	void PracticeDS_25_setData(int nData1, int nData2);
	void PracticeDS_25_update(E_TYPE eType);
	int PracticeDS_25_getResult();
};

#include <iostream>

int main()
{
	PracticeDS_25_C_TEST cTest{};
	cTest.PracticeDS_25_setData(10, 2);

	cTest.PracticeDS_25_update(PracticeDS_25_C_TEST::E_TYPE::E_ADD);
	printf("%d\n", cTest.PracticeDS_25_getResult());

	cTest.PracticeDS_25_update(PracticeDS_25_C_TEST::E_TYPE::E_MUL);
	printf("%d\n", cTest.PracticeDS_25_getResult());

	cTest.PracticeDS_25_update(PracticeDS_25_C_TEST::E_TYPE::E_DIV);
	printf("%d\n", cTest.PracticeDS_25_getResult());
}

void PracticeDS_25_C_TEST::PracticeDS_25_add()
{
	m_nResult = m_nData1 + m_nData2;
}

void PracticeDS_25_C_TEST::PracticeDS_25_mul()
{
	m_nResult = m_nData1 * m_nData2;
}

void PracticeDS_25_C_TEST::PracticeDS_25_div()
{
	m_nResult = m_nData1 / m_nData2;
}

PracticeDS_25_C_TEST::PracticeDS_25_C_TEST() :
	m_nData1{},
	m_nData2{},
	m_nResult{},
	m_arFunc{}
{
	m_arFunc[(int)E_TYPE::E_ADD] = &PracticeDS_25_C_TEST::PracticeDS_25_add;
	m_arFunc[(int)E_TYPE::E_MUL] = &PracticeDS_25_C_TEST::PracticeDS_25_mul;
	m_arFunc[(int)E_TYPE::E_DIV] = &PracticeDS_25_C_TEST::PracticeDS_25_div;
}

void PracticeDS_25_C_TEST::PracticeDS_25_setData(int nData1, int nData2)
{
	m_nData1 = nData1;
	m_nData2 = nData2;
}

void PracticeDS_25_C_TEST::PracticeDS_25_update(E_TYPE eType)
{
	(this->*m_arFunc[(int)eType])();

	//switch (eType)
	//{
	//case PracticeDS_25_C_TEST::E_TYPE::E_ADD:
	//	void (PracticeDS_25_C_TEST:: * pFucAdd)();
	//	pFucAdd = &PracticeDS_25_C_TEST::PracticeDS_25_add;
	//	(this->*pFucAdd)();
	//	break;
	//case PracticeDS_25_C_TEST::E_TYPE::E_MUL:
	//	void (PracticeDS_25_C_TEST:: * pFucMul)();
	//	pFucMul = &PracticeDS_25_C_TEST::PracticeDS_25_mul;
	//	(this->*pFucMul)();
	//	break;
	//case PracticeDS_25_C_TEST::E_TYPE::E_DIV:
	//	void (PracticeDS_25_C_TEST:: * pFucDiv)();
	//	pFucDiv = &PracticeDS_25_C_TEST::PracticeDS_25_div;
	//	(this->*pFucDiv)();
	//	break;
	//}
}

int PracticeDS_25_C_TEST::PracticeDS_25_getResult()
{
	return m_nResult;
}
