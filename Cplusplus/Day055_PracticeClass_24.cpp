
#include <iostream>

class C_PARENT
{
public:
	C_PARENT() { printf("부모생성자\n"); };
	~C_PARENT() { printf("부모소멸자\n"); };
};

class C_CHILD : public C_PARENT
{
public:
	C_CHILD() { printf("자식생성자\n"); };
	~C_CHILD() { printf("자식소멸자\n"); };
};

int main()
{
	C_PARENT* p{};

	p = new C_CHILD{};

	delete p;
}