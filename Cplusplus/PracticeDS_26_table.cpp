#include <stdio.h>
#include "PracticeDS_26_table.h"

void PracticeDS_26_C_TABLE::PracticeDS_26_init(int nStrike, int* pBall, int nBallLength)
{
    m_arState[nStrike] = E_STATE::E_STRIKE;

    for (int i = 0; i < nBallLength; i++)
    {
        m_arState[pBall[i]] = E_STATE::E_BALL;
    }
}

PracticeDS_26_C_TABLE::E_STATE PracticeDS_26_C_TABLE::PracticeDS_26_getResult(int nNumber)
{
    return m_arState[nNumber];
}

void PracticeDS_26_C_TABLE::PracticeDS_26_print()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", m_arState[i]);
    }
    printf("\n");
}