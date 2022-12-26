// PracticeFunction_start6_return3.cpp

#include <iostream>

bool divide(int nDst, int nSrc, int* pQuotient);

int main()
{
	int nData{};

	nData = 9;

	if (divide(10, 0, &nData)) // �Լ��� bool ���̱� ������ ���� ��쿡�� if���� �����ϰ� �ȴ�. �����̸� else�� �ٷ� ����������.
	{
		printf("%d\n", nData);
	}
	else
		printf("����\n");
}

bool divide(int nDst, int nSrc, int* pQuotient)
{
	if (nSrc == 0)
	{
		return false;
	}

	*pQuotient = nDst / nSrc;

	return true; // default return �� ���� ���. ������ �־�� �Ѵ�.
}

//�Ʒ��� �߸��� �ڵ��̴�. return ���� ���ǹ��� ���δ� ���°� �Ǹ� ������ ������ �ִ�. 
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