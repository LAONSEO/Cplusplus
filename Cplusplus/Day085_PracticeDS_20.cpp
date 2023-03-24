//PracticeDS_20 : Singleton.

#include <iostream>
#include "PracticeDS_20.h"

int main()
{
	PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_createInstance();

	PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_getInstance()->PracticeDS_20_C_SINGLETON_setData(100);
	printf("%d\n", PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_getInstance()->PracticeDS_20_C_SINGLETON_getData());

	PracticeDS_20_C_SINGLETON::PracticeDS_20_C_SINGLETON_releaseInstance();
}