// PracticeDS_30.cpp

#include <iostream>
#include <list>

void printData(const std::list<int>& list, std::list<int>::iterator& iter);
bool listGreater(int nDst, int nSrc)
{
	return nDst > nSrc;
}
bool removeOverNum10(int nBigthan10)
{
	return nBigthan10 > 10;
}

int main()
{
	std::list<int> listData{};

	listData.push_back(3);
	listData.push_back(7);
	listData.push_back(5);
	listData.push_back(15);
	listData.push_back(11);

	//�� ó�� ���� ����.
	std::list<int>::iterator iter = listData.begin();
	printData(listData, iter);

	//�������� ����.
	listData.sort();

	//iter �ٽ� begin ���� �ʱ�ȭ �� ���ĵ� ������ ���.
	iter = listData.begin();
	printData(listData, iter);

	//�������� ����
	//listData.sort(std::greater<int>()); �� ������ ����. �Ʒ��� �Լ�������.
	listData.sort(listGreater);

	//iter �ٽ� begin ���� �ʱ�ȭ �� ���ĵ� ������ ���.
	iter = listData.begin();
	printData(listData, iter);

	//���ǿ� ���� erase �Ǵ� remove �� ��������.
	listData.erase(listData.begin());
	listData.remove(5);
	listData.remove_if(removeOverNum10);

	//iter �ٽ� begin ���� �ʱ�ȭ �� ���ĵ� ������ ���.
	iter = listData.begin();
	printData(listData, iter);

	//���� ��� : ��� �����Ϳ� ������ ��, �������� ���� ���� ������ ���鼭 �� �ȿ� ó���� ���� ����.	
	iter = listData.begin();
	while (iter != listData.end())
	{
		if (*iter >= 5)
		{
			iter = listData.erase(iter);
			//listData.erase(iter++); ���
		}
		else
			iter++;
	}
	iter = listData.begin();
	printData(listData, iter);
}

void printData(const std::list<int>& list, std::list<int>::iterator& iter)
{
	while (iter != list.end())
	{
		printf("%d ", *iter);
		iter++;
	}
	printf("\n");
}