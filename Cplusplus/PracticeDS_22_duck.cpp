#include "PracticeDS_22_duck.h"

void PracticeDS_22_C_DUCK::init(PracticeDS_22_C_MOVE* pMove, PracticeDS_22_C_SOUND* pSound)
{
    m_pMove = pMove;
    m_pSound = pSound;
}

PracticeDS_22_C_MOVE* PracticeDS_22_C_DUCK::PracticeDS_22_getMove()
{
    return m_pMove;
}

PracticeDS_22_C_SOUND* PracticeDS_22_C_DUCK::PracticeDS_22_getSound()
{
    return m_pSound;
}

void PracticeDS_22_C_DUCK::PracticeDS_22_release()
{
    delete m_pMove;
    delete m_pSound;
    m_pMove = nullptr;
    m_pSound = nullptr;
}
