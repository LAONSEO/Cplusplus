// PracticeFunction_start3.cpp

#include <iostream>

int main()
{
	int* p{}; // 기본적인 형태의 포인터 변수 선언 형태

	int nData1(101);
	int nData2(102);
	int nData3(103);

	const int* p1(&nData1);
	int const* p2(&nData2);
	int* const p3(&nData3);

	//*p1 = 51; // *ptr 자체를 const 시킨 거라서 값 자체를 바꿀 수 없다.
	//*p2 = 52; // *ptr 자체를 const 시킨 거라서 값 자체를 바꿀 수 없다.
	*p3 = 53; // *p3 값은 변할 수 있다.

	p1 = &nData2; // 주소는 const 값이 아니므로, 주소를 변경하여 값을 변경할 수 있다.
	p2 = &nData3; // 주소는 const 값이 아니므로, 주소를 변경하여 값을 변경할 수 있다.
	//p3 = &nData1; // 주소가 const 값이므로, 주소 변경은 불가능하지만 그 주소에 담겨져 있는 *p3는 위와 같이 변경이 가능하다.

	printf("%d\n", *p1);
	printf("%d\n", *p2);
	printf("%d\n", *p3);
}