// PracticeDS_28_template_class.cpp

#include <iostream>

template<class T>
T add(T t1, T t2);

template<>
char add(char c1, char c2);

int main()
{
	int nData1{};
	int nData2{};
	int nResult{};

	nData1 = 10;
	nData2 = 2;

	nResult = add(nData1, nData2);
	printf("%d\n", nResult);

	add<char>('a', 'b');
}

template<class T>
inline T add(T t1, T t2)
{
	return t1 + t2;
}

template<>
inline char add(char c1, char c2)
{
	printf("템플릿 특수화\n");
	return c1 + c2;
}