class C_DATA
{
public:
	C_DATA();
	C_DATA(int);
	C_DATA(const C_DATA&);
};

#include <iostream>

C_DATA testFunc();

int main()
{
	C_DATA(); // C_DATA Ŭ������ �ӽ� ������ �ϳ� ����� ��. ����� �����ϴ� ���. �� ���� Ŭ���� ������ �θ���.
	testFunc(); // ���� �����ڰ� �ƴϴ�.

	//C_DATA cMain{};
	//cMain = testFunc();
}

C_DATA testFunc()
{
	return C_DATA();
	//C_DATA c{}; // ������ ���� ���״ٰ� ��������. û�Ҹ� ���״�.
	//return c;
}

C_DATA::C_DATA()
{
	printf("������\n");
}

C_DATA::C_DATA(int)
{
	printf("int �Է� ������\n");
}

C_DATA::C_DATA(const C_DATA&)
{
	printf("���� ������\n");
}