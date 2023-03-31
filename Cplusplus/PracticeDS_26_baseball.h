#pragma once

#include <windows.h>
#include <stdio.h>
#include "PracticeDS_26_table.h"

class PracticeDS_26_C_BASEBALL
{
private:
	PracticeDS_26_C_TABLE* m_pTable;
	int m_nTableLength;

private:
	int rangeRandom(int nRangeMin, int nRangeMax);
	void swapData(int& nDst, int& nSrc);
	void createNumber(int* pNumber, int nNumberLength);
	void inputData(int* pNumber, int nNumberLength);

public:
	PracticeDS_26_C_BASEBALL() = default;
	void PracticeDS_26_init(int nNumberCount);
};
