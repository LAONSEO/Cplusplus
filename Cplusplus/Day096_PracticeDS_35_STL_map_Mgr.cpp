#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>
#include "PracticeDS_35_studentMgr.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    PracticeDS_35_C_STUDENTMGR cMgr{};
    PracticeDS_35_C_STUDENT* pStudent{};

    pStudent = cMgr.createStudent("김정수");
    pStudent->init(9, "수원시 권선구", "사회경제");
    pStudent = cMgr.createStudent("양진모");
    pStudent->init(6, "서울시 강남구", "소프트웨어");
    pStudent = cMgr.createStudent("이주훈");
    pStudent->init(5, "용인시 기흥구", "기계");

    cMgr.erase("양진모");

    cMgr.printAllStudent();

    pStudent = cMgr.createStudent("양진모");
    pStudent->init(6, "서울시 강남구", "소프트웨어");
    cMgr.printOneStudent("양진모");

    cMgr.clear();
}