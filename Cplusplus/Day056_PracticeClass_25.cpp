#include <iostream>

class A
{
public:
	virtual void func() abstract;
	virtual void other();
};

class B : public A
{
public:
	// A을(를) 통해 상속됨
	virtual void func() override { printf("B 가상 함수\n"); };
};

int main()
{
	A* p = new B{};

	p->func(); // overridded 된 B 가상 함수 가 불린다.
	p->other();
	//A cData{}; // 추상클래스는 선언 불가.
}

void A::func()
{
	printf("A 가상 함수\n");
}

void A::other()
{
	printf("순수 아니고 일반\n");
}