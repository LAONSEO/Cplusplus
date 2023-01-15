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

	//학생정보를 입력하는 함수 // 수동으로 5번.
	setStudentData(arClass_A, 'a', 90, 80, 70);
	setStudentData(arClass_A, 'b', 80, 70, 70);
	setStudentData(arClass_A, 'c', 80, 50, 50);
	setStudentData(arClass_A, 'd', 70, 60, 60);
	setStudentData(arClass_A, 'e', 60, 70, 70);

	//학생정보를 출력하는 함수
	printStudentData(arClass_A);

	//총점 평균을 구해주는 함수
	printf("%f\n", calAverage(arClass_A));

	//가장 성적이 높은 학생의 이름을 출력하세요. // 이건 함수 아니고 메인에다가 구현.
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
	printf("최고 평균점수는 %f 입니다. \n", nHighScoreStudent);
	printf("가장 평균이 높은 학생은 %c 입니다. \n", arClass_A->strName[nHighScoreIndex]);
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
