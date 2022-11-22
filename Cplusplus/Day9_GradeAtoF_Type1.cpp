
#include <iostream>

int main()
{
    int nScore{};

    printf("Enter your score.\n");
    scanf_s("%d", &nScore);

    if (nScore > 100)
        printf("ENTER YOUR REAL SCORE\n");
    else if (nScore >= 90)
        printf("Grade A");
    else if (nScore >= 80)
        printf("Grade B");
    else if (nScore >= 70)
        printf("Grade C");
    else if (nScore >= 60)
        printf("Grade D");
    else if (nScore >= 0)
        printf("Grade F");
    else
        printf("ERROR");
}