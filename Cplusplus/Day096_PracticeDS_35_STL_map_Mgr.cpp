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

    pStudent = cMgr.createStudent("������");
    pStudent->init(9, "������ �Ǽ���", "��ȸ����");
    pStudent = cMgr.createStudent("������");
    pStudent->init(6, "����� ������", "����Ʈ����");
    pStudent = cMgr.createStudent("������");
    pStudent->init(5, "���ν� ���ﱸ", "���");

    cMgr.erase("������");

    cMgr.printAllStudent();

    pStudent = cMgr.createStudent("������");
    pStudent->init(6, "����� ������", "����Ʈ����");
    cMgr.printOneStudent("������");

    cMgr.clear();
}