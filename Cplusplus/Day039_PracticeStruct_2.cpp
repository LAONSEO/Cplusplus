// PracticeStruct_2.cpp

#include <iostream>

struct S_DATA
{
    char c1;
    char c2;
    int n1;
    int n2;
};

int main()
{
    S_DATA sData{};
    S_DATA* p{};

    p = &sData;

    (*p).n1 = 100;

    printf("%d\n", (*p).n1);

    p->n2 = 200;

    printf("%d\n", p->n2);
}