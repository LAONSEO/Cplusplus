#include <iostream>
#include "PracticeClass_17.h"

int main()
{
	PracticeClass_17 c;
	int nData{};

	c.setData(10);

	nData = c + 100;
	printf("%d\n", nData);

	nData = c += 7;
	printf("%d\n", nData);

	nData = c + 10;
	printf("%d\n", nData);
}