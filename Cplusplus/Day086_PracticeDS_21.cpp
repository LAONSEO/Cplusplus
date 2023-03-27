// PracticeDS_21.cpp : decorator pattern.

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>

#include "PracticeDS_21_base_DoughNormal.h"
#include "PracticeDS_21_base_DoughThin.h"
#include "PracticeDS_21_deco_cheese.h"
#include "PracticeDS_21_deco_potato.h"
#include "PracticeDS_21_deco_tomato.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	PracticeDS_21_C_BASE* pBase{};

	pBase = new Prac;

	pBase = new PracticeDS_21_C_TOMATO(pBase);
	pBase = new PracticeDS_21_C_POTATO(pBase);
	pBase = new PracticeDS_21_C_CHEESE(pBase);
	pBase = new PracticeDS_21_C_CHEESE(pBase);

	pBase->printName();
	printf("АЁАн %d\n", pBase->getCost());

	delete pBase;
}