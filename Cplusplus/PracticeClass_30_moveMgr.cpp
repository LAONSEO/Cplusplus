#include "PracticeClass_30_moveMgr.h"
#include "PracticeClass_30_fly.h"
#include "PracticeClass_30_swim.h"
#include "PracticeClass_30_walk.h"

void PracticeClass_30_moveMgr::init()
{
    m_arMove[0] = new PracticeClass_30_fly{};
    m_arMove[1] = new PracticeClass_30_swim{};
    m_arMove[2] = new PracticeClass_30_walk{};
}

PracticeClass_30_move* PracticeClass_30_moveMgr::getMove(int nMoveIndex)
{
    if (nMoveIndex < 0 || nMoveIndex >= 3)
        return nullptr;

    return m_arMove[nMoveIndex];
}

void PracticeClass_30_moveMgr::release()
{
    for (int i = 0; i < 3; i++)
    {
        delete m_arMove[i];
        m_arMove[i] = nullptr;
    }
}
