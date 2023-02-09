// PracticeClass_27.cpp

#include <iostream>

class C_ANIMAL abstract
{
protected:
    int m_nData;
public:
    C_ANIMAL(int nData);
};

class C_DOG : public C_ANIMAL
{
public:
    C_DOG(int nData);
};

int main()
{
    C_DOG cDog(100);
}

C_ANIMAL::C_ANIMAL(int nData) :
    m_nData{}
{
    m_nData = nData;
}

C_DOG::C_DOG(int nData) :
    C_ANIMAL(nData) // point.
{
}