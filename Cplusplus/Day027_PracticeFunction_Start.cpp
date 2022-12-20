// PracticeFunction_start1.cpp

#include <iostream>
void function(int nData1, int nData2);


int main()
{
	int nData{};
	int arData[2][3]{ {6,5,4}, {3,2,1} };
	int(*p)[3];

	nData = 100;
	p = arData;

	function(nData + nData, nData * 2 - nData);
	function(nData / 5, nData % 3);
	function((*p)[1], *p[1]);
}

void function(int nData1, int nData2)
{
	printf("%d, %d\n", nData1, nData2);
}