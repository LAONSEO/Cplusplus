#include "PracticeClass_31_F_moveMgr.h"

PracticeClass_31_F_MOVE* PracticeClass_31_F_moveMgr::createMove(E_MOVE eMove)
{
    return m_arFactory[(int)eMove]->createMove();
}

void PracticeClass_31_F_moveMgr::deleteMove(PracticeClass_31_F_MOVE*& pMove)
{
    delete pMove;
    pMove = nullptr;
}

void PracticeClass_31_F_moveMgr::init()
{
    m_arFactory[(int)E_MOVE::FLY] = new PracticeClass_31_F_MOVEFACTORY_FLY{};
    m_arFactory[(int)E_MOVE::SWIM] = new PracticeClass_31_F_MOVEFACTORY_SWIM{};
    m_arFactory[(int)E_MOVE::WALK] = new PracticeClass_31_F_MOVEFACTORY_WALK{};
}

void PracticeClass_31_F_moveMgr::release()
{
    for (int i = 0; i < (int)E_MOVE::E_MOVE_MAX; i++)
    {
        delete m_arFactory[i];
        m_arFactory[i] = nullptr;
    }
}