// PracticeFunction_start7.cpp : function overloading

#include <iostream>

int addNumber(int nNum1, int nNum2);

int addNumber(int nNum1, int nNum2, int nNum3);

double addNumber(double dNum1, double dNum2);

double addNumber(double dNum1, double dNum2, double dNum3);

int main()
{
	int nData1(100);
	int nData2(200);
	int nData3(300);

	double dData1(1.1);
	double dData2(2.2);
	double dData3(3.3);

	printf("%d\n", addNumber(nData1, nData2));
	printf("%d\n", addNumber(nData1, nData2, nData3));
	printf("%lf\n", addNumber(dData1, dData2, dData3));

}

int addNumber(int nNum1, int nNum2)
{
	return nNum1 + nNum2;
}

int addNumber(int nNum1, int nNum2, int nNum3)
{
	return nNum1 + nNum2 + nNum3;
}

double addNumber(double dNum1, double dNum2)
{
	return dNum1 + dNum2;
}

double addNumber(double dNum1, double dNum2, double dNum3)
{
	return dNum1 + dNum2 + dNum3;
}