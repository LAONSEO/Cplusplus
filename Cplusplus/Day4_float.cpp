#include <iostream>

int main()
{
	int nData1{};
	int nData2{};

	float fData1{};
	float fData2{};
	float fData3{};

	nData1 = 10;
	nData2 = 7;

	fData1 = (float)nData1 / (float)nData2;
	fData2 = (float)nData1 / nData2; // �����Ϸ� ��Ģ ������ �Ǳ�� �ϴµ� �̷��� ������ ����
	fData3 = nData1 / (float)nData2; // �����Ϸ� ��Ģ ������ �Ǳ�� �ϴµ� �̷��� ������ ����
	// ���������� �߸��� ���̽� fData = (float)(nData1 / nData2);

	std::cout << fData1 << '\n';
	std::cout << fData2 << '\n';
	std::cout << fData3 << '\n';

}