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
	// A��(��) ���� ��ӵ�
	virtual void func() override { printf("B ���� �Լ�\n"); };
};

int main()
{
	A* p = new B{};

	p->func(); // overridded �� B ���� �Լ� �� �Ҹ���.
	p->other();
	//A cData{}; // �߻�Ŭ������ ���� �Ұ�.
}

void A::func()
{
	printf("A ���� �Լ�\n");
}

void A::other()
{
	printf("���� �ƴϰ� �Ϲ�\n");
}