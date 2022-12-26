// PracticeFunction_start6_return3.cpp

#include <iostream>

bool divide(int nDst, int nSrc, int* pQuotient);

int main()
{
	int nData{};

	nData = 9;

	if (divide(10, 0, &nData)) // 함수가 bool 형이기 때문에 참일 경우에만 if문이 동작하게 된다. 거짓이면 else로 바로 빠져버린다.
	{
		printf("%d\n", nData);
	}
	else
		printf("실패\n");
}

bool divide(int nDst, int nSrc, int* pQuotient)
{
	if (nSrc == 0)
	{
		return false;
	}

	*pQuotient = nDst / nSrc;

	return true; // default return 을 써준 모습. 무조건 있어야 한다.
}

//아래는 잘못된 코딩이다. return 으로 조건문을 감싸는 형태가 되면 위험의 소지가 있다. 
//bool divide(int nDst, int nSrc, int* pQuotient)
//{
//	if (nSrc == 0)
//	{
//		return false;
//	}
//	else
//	{
//		*pQuotient = nDst / nSrc;
//		return true;
//	}
//}