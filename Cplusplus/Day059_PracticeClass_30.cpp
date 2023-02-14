// PracticeClass_30.cpp : memory manager 1

#include <iostream>
#include "PracticeClass_30_moveMgr.h"
#include "PracticeClass_30_fly.h"
#include "PracticeClass_30_swim.h"
#include "PracticeClass_30_walk.h"
#include "PracticeClass_30_duck.h"

int main()
{
	PracticeClass_30_moveMgr cMoveMgr{};
	PracticeClass_30_duck arDuck[5]{};

	cMoveMgr.init();

	arDuck[0].setMove(cMoveMgr.getMove(0));
	arDuck[1].setMove(cMoveMgr.getMove(1));
	arDuck[2].setMove(cMoveMgr.getMove(0));
	arDuck[3].setMove(cMoveMgr.getMove(2));
	arDuck[4].setMove(cMoveMgr.getMove(1));

	arDuck[4].getMove()->setData(100);

	for (int i = 0; i < 5; i++)
	{
		arDuck[i].getMove()->move();
	}

	cMoveMgr.release();
}