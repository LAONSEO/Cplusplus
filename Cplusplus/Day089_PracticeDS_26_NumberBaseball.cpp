// Day089_PracticeDS_26_NumberBaseball.
// windows.h 적용을 위해 다음 절차 수행필요.
// 속성 - 구성 속성 - 링커 - 입력 - 구성에서 활성debug, 활성(x64) 설정 - 추가종속성 최우측 편집 - winmm.lib 입력 후 적용.

#include <windows.h>
#include <iostream>

int RangedRand(int range_min, int range_max)
{
	range_max++;
	return (int)(((double)rand() / (double)(RAND_MAX + 1)) * ((double)range_max - (double)range_min) + (double)range_min);
}

int main()
{
	srand(timeGetTime());
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", RangedRand(0, 9));
	}
}