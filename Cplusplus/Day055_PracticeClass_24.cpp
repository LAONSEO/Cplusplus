
#include <iostream>

class A
{
public:
	A() { printf("A������\n"); };
	virtual ~A() { printf("A�Ҹ���\n"); };
};

class B : public A
{
public:
	B() { printf("B������\n"); };
	~B() { printf("B�Ҹ���\n"); };
};

class C : public B
{
public:
	C() { printf("C������\n"); };
	~C() { printf("C�Ҹ���\n"); };
};

int main()
{
	A* a{};

	a = new C{};

	delete a;
}