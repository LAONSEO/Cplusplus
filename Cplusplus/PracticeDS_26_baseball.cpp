#include "PracticeDS_26_baseball.h"
#include <list>

int PracticeDS_26_C_BASEBALL::rangeRandom(int nRangeMin, int nRangeMax)
{
	nRangeMax++;
	return (int)(((double)rand() / (double)(RAND_MAX + 1)) * ((double)nRangeMax - (double)nRangeMin) + (double)nRangeMin);
}

void PracticeDS_26_C_BASEBALL::swapData(int& nDst, int& nSrc)
{
	int nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

void PracticeDS_26_C_BASEBALL::createNumber(int* pNumber, int nNumberLength)
{
	srand(timeGetTime());
	int arData[10]{ 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 20; i++)
	{
		swapData(arData[rangeRandom(0, 9)], arData[rangeRandom(0, 9)]);
	}
	for (int i = 0; i < nNumberLength; i++)
	{
		pNumber[i] = arData[i];
	}
}

void PracticeDS_26_C_BASEBALL::inputData(int* pNumber, int nNumberLength)
{
	std::list<int> listData{};
	for (int i = 0; i < nNumberLength; i++)
	{
		listData.push_back(pNumber[i]);
	}

	int nBallLength = nNumberLength - 1;
	int* pBall = new int[nBallLength] {};
	for (int i = 0; i < m_nTableLength; i++)
	{
		std::list<int>::iterator iter = listData.begin();
		int nStrike = *iter;
		iter++;
		int nIndex{};
		for (int j = 0; j < nBallLength; j++)
		{
			pBall[j] = *iter;
			iter++;
		}
		m_pTable[i].PracticeDS_26_init(nStrike, pBall, nBallLength);

		listData.push_back(*listData.begin());
		listData.pop_front();
	}

	delete[] pBall;
}

void PracticeDS_26_C_BASEBALL::run()
{
	int* pInput = new int[m_nTableLength] {};

	int arResult[(int)PracticeDS_26_C_TABLE::E_STATE::E_MAX]{};
	while (arResult[(int)PracticeDS_26_C_TABLE::E_STATE::E_STRIKE] < m_nTableLength)
	{
		for (int i = 0; i < (int)PracticeDS_26_C_TABLE::E_STATE::E_MAX; i++)
		{
			arResult[i] = 0;
		}
		int nFlagCount{};
		while (nFlagCount < m_nTableLength)
		{
			printf("0부터 9까지 중 서로 다른 숫자를 입력하시오.\n");
			nFlagCount = 0;
			int arFlag[10]{};
			for (int i = 0; i < m_nTableLength; i++)
			{
				scanf_s("%d", &pInput[i]);
				arFlag[pInput[i]] = 1;
			}
			for (int i = 0; i < 10; i++)
			{
				nFlagCount += arFlag[i];
			}
		}

		for (int i = 0; i < m_nTableLength; i++)
		{
			arResult[(int)m_pTable[i].PracticeDS_26_getResult(pInput[i])]++;
		}
		printf("아웃 : %d\n", arResult[(int)PracticeDS_26_C_TABLE::E_STATE::E_OUT]);
		printf("볼 : %d\n", arResult[(int)PracticeDS_26_C_TABLE::E_STATE::E_BALL]);
		printf("스트라이크 : %d\n", arResult[(int)PracticeDS_26_C_TABLE::E_STATE::E_STRIKE]);
	}
}

void PracticeDS_26_C_BASEBALL::PracticeDS_26_init(int nNumberCount)
{
	m_nTableLength = nNumberCount;
	m_pTable = new PracticeDS_26_C_TABLE[m_nTableLength]{};

	int* pNumber = new int[m_nTableLength] {};
	createNumber(pNumber, m_nTableLength);

	inputData(pNumber, m_nTableLength);

	printf("정답 : ");
	for (int i = 0; i < m_nTableLength; i++)
	{
		printf("%d ", pNumber[i]);
	}
	printf("\n");

	delete[] pNumber;

	for (int i = 0; i < m_nTableLength; i++)
	{
		m_pTable[i].PracticeDS_26_print();
	}
}