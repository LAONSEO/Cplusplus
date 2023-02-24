// PracticeDS_9.cpp :

#include <iostream>

void hanoi(int nCount, char start, char tmp, char end);

int main()
{
	hanoi(4, 'a', 'b', 'c');
}

void hanoi(int nCount, char start, char tmp, char end)
{
	if (nCount == 0)
	{
		return;
	}

	hanoi(nCount - 1, start, tmp, end);
	printf("%d %c -> %c\n", nCount, start, end);
	hanoi(nCount - 1, tmp, end, start);
}