// PracticeClass_13.cpp

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    //_CrtSetBreakAlloc(76);

    int* p1{};
    int* p2{};

    p1 = new int{};
    p2 = new int[5] {};
}