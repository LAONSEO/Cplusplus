// Check the remainder with operator '%'.


#include <iostream>

int main()
{
	int nDst{};
	int nSrc{};
	int nShare{};
	int nRemainder{};

	scanf_s("%d", &nDst);
	scanf_s("%d", &nSrc);

	nShare = nDst / nSrc;
	nRemainder = nDst - nSrc * nShare;

	printf("�������� %d �Դϴ�.", nRemainder);

}