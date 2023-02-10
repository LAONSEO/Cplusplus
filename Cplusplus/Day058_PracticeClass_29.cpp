#include <iostream>
#include "PracticeClass_29_duck.h"
#include "PracticeClass_29_fly.h"
#include "PracticeClass_29_walk.h"

int main()
{
	PracticeClass_29_duck arDuck[5]{};
	PracticeClass_29_fly cFly{};
	PracticeClass_29_walk cWalk{};

	arDuck[0].setMove(&cFly);
	arDuck[1].setMove(&cWalk);
	arDuck[2].setMove(&cWalk);
	arDuck[3].setMove(&cFly);
	arDuck[4].setMove(&cFly);

	for (int i = 0; i < 5; i++)
	{
		arDuck[i].getMove()->move();
	}
}