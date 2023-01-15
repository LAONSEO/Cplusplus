#include <iostream>

struct S_DATA
{
	char strName[16];
	int nKor[16];
	int nEng[16];
	int nMath[16];
	int nTotal[16];
	float fAvg[16];
};

void setStudentData(S_DATA* pData, char cName, int nK, int nE, int nM);
void printStudentData(const S_DATA* pData);
float calAverage(S_DATA* pData);

int main()
{
	S_DATA arClass_A[5]{};

	//�л������� �Է��ϴ� �Լ� // �������� 5��.
	setStudentData(arClass_A, 'a', 90, 80, 70);
	setStudentData(arClass_A, 'b', 80, 70, 70);
	setStudentData(arClass_A, 'c', 80, 50, 50);
	setStudentData(arClass_A, 'd', 70, 60, 60);
	setStudentData(arClass_A, 'e', 60, 70, 70);

	//�л������� ����ϴ� �Լ�
	printStudentData(arClass_A);

	//���� ����� �����ִ� �Լ�
	printf("%f\n", calAverage(arClass_A));

	//���� ������ ���� �л��� �̸��� ����ϼ���. // �̰� �Լ� �ƴϰ� ���ο��ٰ� ����.
	float nHighScoreStudent{};
	int nIndex{};
	int nHighScoreIndex{};
	nHighScoreStudent = arClass_A->fAvg[0];
	while (arClass_A->strName[nIndex] != 0)
	{
		if (nHighScoreStudent < arClass_A->fAvg[nIndex])
		{
			nHighScoreStudent = arClass_A->fAvg[nIndex];
			nHighScoreIndex = nIndex;
		}
		nIndex++;
	}
	printf("�ְ� ��������� %f �Դϴ�. \n", nHighScoreStudent);
	printf("���� ����� ���� �л��� %c �Դϴ�. \n", arClass_A->strName[nHighScoreIndex]);
}

void setStudentData(S_DATA* pData, char cName, int nK, int nE, int nM)
{
	int nIndex{};
	int nStop{};
	while (nStop == 0)
	{
		if (pData->strName[nIndex] == 0)
		{
			pData->strName[nIndex] = cName;
			pData->nKor[nIndex] = nK;
			pData->nEng[nIndex] = nE;
			pData->nMath[nIndex] = nM;
			nStop++;
		}
		else if (pData->strName[nIndex] != 0)
		{
			nIndex++;
		}
	}
}

void printStudentData(const S_DATA* pData)
{
	int nIndex{};
	while (pData->strName[nIndex] != 0)
	{
		printf("%c , %d, %d, %d \n", pData->strName[nIndex], pData->nKor[nIndex], pData->nEng[nIndex], pData->nMath[nIndex]);
		nIndex++;
	}
}

float calAverage(S_DATA* pData)
{
	int nIndex{};
	float fAverage{};

	while (pData->strName[nIndex] != 0)
	{
		fAverage = float(pData->nKor[nIndex] + pData->nEng[nIndex] + pData->nMath[nIndex]) / 3;
		pData->fAvg[nIndex] = fAverage;
		nIndex++;
	}
	return fAverage;
}
