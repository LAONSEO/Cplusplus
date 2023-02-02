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
	C_DATA(); // C_DATA 클래스의 임시 변수를 하나 만드는 것. 허공에 존재하는 상수. 이 놈은 클래스 상수라고 부른다.
	testFunc(); // 복사 생성자가 아니다.

	//C_DATA cMain{};
	//cMain = testFunc();
}

C_DATA testFunc()
{
	return C_DATA();
	//C_DATA c{}; // 모종의 일을 시켰다고 가정하자. 청소를 시켰다.
	//return c;
}

C_DATA::C_DATA()
{
	printf("생성자\n");
}

C_DATA::C_DATA(int)
{
	printf("int 입력 생성자\n");
}

C_DATA::C_DATA(const C_DATA&)
{
	printf("복사 생성자\n");
}