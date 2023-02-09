
#include <iostream>
#include "PracticeClass_26_duck.h"
#include "PracticeClass_26_cat.h"

int main()
{
	PracticeClass_26_animal* arAnimal[5]{};

	arAnimal[0] = new PracticeClass_26_C_DUCK{};
	arAnimal[1] = new PracticeClass_26_C_CAT{};
	arAnimal[2] = new PracticeClass_26_C_DUCK{};
	arAnimal[3] = new PracticeClass_26_C_CAT{};
	arAnimal[4] = new PracticeClass_26_C_DUCK{};

	for (int i = 0; i < 5; i++)
	{
		arAnimal[i]->move();
		arAnimal[i]->sound();
	}

	for (int i = 0; i < 5; i++)
	{
		delete arAnimal[i];
	}
}