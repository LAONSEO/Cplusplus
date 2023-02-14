#pragma once
#include "PracticeClass_30_move.h"

class PracticeClass_30_moveMgr
{
private:
	PracticeClass_30_move* m_arMove[3];
public:
	PracticeClass_30_moveMgr() = default;
	PracticeClass_30_moveMgr(const PracticeClass_30_moveMgr&) = delete;
	PracticeClass_30_moveMgr& operator=(const PracticeClass_30_moveMgr&) = delete;

	void init();
	PracticeClass_30_move* getMove(int nMoveIndex);
	void release();
};