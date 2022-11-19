
#include <iostream>

int main()
{
    int nCurrentScore{};
    int nDeltaScore{};
    int nIncreaseScore{};
    int nTier{};



    printf("Enter the your current score\n");
    scanf_s("%d", &nCurrentScore);

    printf("Enter the increased score\n");
    scanf_s("%d", &nDeltaScore);

    nIncreaseScore = nCurrentScore + nDeltaScore;

    if (nIncreaseScore >= 0 and nIncreaseScore < 1500)
        printf("Bronze");

    if (nIncreaseScore >= 1500 and nIncreaseScore < 2000)
        printf("Sliver");

    if (nIncreaseScore >= 2000 and nIncreaseScore < 2500)
        printf("Gold");

    if (nIncreaseScore >= 2500 and nIncreaseScore < 3000)
        printf("Platinum");

    if (nIncreaseScore >= 3000 and nIncreaseScore < 3500)
        printf("Diamond");

    if (nIncreaseScore >= 3500 and nIncreaseScore < 4000)
        printf("Master");

    if (nIncreaseScore >= 4000 and nIncreaseScore < 5000)
        printf("GrandMaster");



}