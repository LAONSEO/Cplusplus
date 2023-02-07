
#include <iostream>

class A
{
public:
	A() { printf("A持失切\n"); };
	virtual ~A() { printf("A社瑚切\n"); };
};

class B : public A
{
public:
	B() { printf("B持失切\n"); };
	~B() { printf("B社瑚切\n"); };
};

class C : public B
{
public:
	C() { printf("C持失切\n"); };
	~C() { printf("C社瑚切\n"); };
};

int main()
{
	A* a{};

	a = new C{};

	delete a;
}