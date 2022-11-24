
#include <iostream>

int main()
{
	int nScore{};

	printf("Enter your score.\n");
	scanf_s("%d", &nScore);

	if (nScore > 100)
		printf("ENTER YOUR REAL SCORE\n");
	if (nScore < 100 && nScore >= 90)
		printf("Grade A\n");
	if (nScore < 90 && nScore >= 80)
		printf("Grade B\n");
	if (nScore < 80 && nScore >= 70)
		printf("Grade C\n");
	if (nScore < 70 && nScore >= 60)
		printf("Grade D\n");
	if (nScore < 60 && nScore >= 0)
		printf("Grade F\n");
	if (nScore < 0)
		printf("ERROR\n");



}
