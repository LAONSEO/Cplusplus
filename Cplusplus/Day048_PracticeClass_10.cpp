// PracticeClass_10.cpp

#include <iostream>

int main()
{
    int* p{};

    p = new int{};

    *p = 100;

    printf("%d\n", *p);

    delete p;
}