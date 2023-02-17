// PracticeDS_4.cpp : heap structure.

class C_HEAP
{
private:
	enum
	{
		HEAP_BUFFER_NULL = 0
	};
private:
	int* m_pHeapBuffer;
	int m_nBufferLength;
	int m_nDataCount;
public:
	C_HEAP() = default;
	void init(int nBufferLength);
	void release();
	void swapData(int& nDst, int& nSrc);
	bool addData(int nData);
	void printData();
};

#include <iostream>

int main()
{
	C_HEAP cHeap{};

	cHeap.init(9);

	cHeap.addData(6);
	cHeap.addData(7);
	cHeap.addData(9);
	cHeap.addData(8);
	cHeap.addData(5);
	cHeap.addData(4);
	cHeap.addData(2);
	cHeap.addData(3);
	cHeap.addData(1);

	cHeap.printData();
	cHeap.release();
}

void C_HEAP::init(int nBufferLength)
{
	m_nBufferLength = nBufferLength + 1;
	m_pHeapBuffer = new int[m_nBufferLength] {};
	m_nDataCount = 0;
}

void C_HEAP::release()
{
	delete m_pHeapBuffer;
	m_pHeapBuffer = nullptr;
	m_nDataCount = 0;
	m_nBufferLength = 0;
}

void C_HEAP::swapData(int& nDst, int& nSrc)
{
	int nTmp{};
	nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

bool C_HEAP::addData(int nData)
{
	int nCurrent = m_nDataCount + 1;

	if (m_nBufferLength <= m_nDataCount)
	{
		return false;
	}

	m_pHeapBuffer[nCurrent] = nData;
	m_nDataCount++;

	int nUp{};
	nUp = nCurrent / 2;

	while (nUp != HEAP_BUFFER_NULL && m_pHeapBuffer[nCurrent] < m_pHeapBuffer[nUp])
	{
		swapData(m_pHeapBuffer[nCurrent], m_pHeapBuffer[nUp]);
		nCurrent = nUp;
		nUp = nCurrent / 2;
	}
	return true;
}

void C_HEAP::printData()
{
	for (int i = 1; i < m_nDataCount; i++)
	{
		printf("%d ", m_pHeapBuffer[i]);
	}
	printf("\n");
}