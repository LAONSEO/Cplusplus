
#include <iostream>

class C_PARENT
{
public:
	C_PARENT() { printf("�θ������\n"); };
	~C_PARENT() { printf("�θ�Ҹ���\n"); };
};

class C_CHILD : public C_PARENT
{
public:
	C_CHILD() { printf("�ڽĻ�����\n"); };
	~C_CHILD() { printf("�ڽļҸ���\n"); };
};

int main()
{
	C_PARENT* p{};

	p = new C_CHILD{};

	delete p;
}