// Day089_PracticeDS_26_NumberBaseball.
// windows.h ������ ���� ���� ���� �����ʿ�.
// �Ӽ� - ���� �Ӽ� - ��Ŀ - �Է� - �������� Ȱ��debug, Ȱ��(x64) ���� - �߰����Ӽ� �ֿ��� ���� - winmm.lib �Է� �� ����.

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