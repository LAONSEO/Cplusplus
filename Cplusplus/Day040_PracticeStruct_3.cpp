#include <iostream>

struct S_TEST
{
    int nData;
    int* pData;
};
struct S_DATA
{
    int nData;
    S_TEST* pTest;
};

int main()
{
    S_DATA* p;

    (*(*p).pTest).nData;
    p->pTest->nData;
    *p->pTest->pData;
}