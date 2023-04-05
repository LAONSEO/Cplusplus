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

	//맨 처음 정렬 순서.
	std::list<int>::iterator iter = listData.begin();
	printData(listData, iter);

	//오름차순 정렬.
	listData.sort();

	//iter 다시 begin 으로 초기화 후 정렬된 데이터 출력.
	iter = listData.begin();
	printData(listData, iter);

	//내림차순 정렬
	//listData.sort(std::greater<int>()); 가 원래의 사용법. 아래는 함수포인터.
	listData.sort(listGreater);

	//iter 다시 begin 으로 초기화 후 정렬된 데이터 출력.
	iter = listData.begin();
	printData(listData, iter);

	//조건에 따라 erase 또는 remove 로 지워본다.
	listData.erase(listData.begin());
	listData.remove(5);
	listData.remove_if(removeOverNum10);

	//iter 다시 begin 으로 초기화 후 정렬된 데이터 출력.
	iter = listData.begin();
	printData(listData, iter);

	//기존 방식 : 모든 데이터에 접근할 때, 루프문을 만들어서 전부 뺑뺑이 돌면서 그 안에 처리할 내용 넣음.	
	iter = listData.begin();
	while (iter != listData.end())
	{
		if (*iter >= 5)
		{
			iter = listData.erase(iter);
			//listData.erase(iter++); 편법
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