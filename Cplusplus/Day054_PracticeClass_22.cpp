// PracticeClass_22.cpp

#include <iostream>

class C_PARENT
{
public:
    void print();
};

class C_CHILD : public C_PARENT
{
};

int main()
{
    C_PARENT* cParent{};
    C_CHILD cChild{};

    cParent = &cChild;
    cParent->print();
}

void C_PARENT::print()
{
    printf("부모클래스\n");
}