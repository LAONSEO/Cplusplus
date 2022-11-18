// 오늘 복습할 if문 + 크거나 작다 or 작거나 크다
// 던전앤파이터 : 피로도를 n소모하는 던전을 현재 n피로도를 가지고 ?회 돌 수 있는지?

#include <iostream>

int main()
{
    int nCurrentFatigueScore{};
    int nEntryConsumeFatigue{};
    int nEntryCount{};


    printf("Please enter your current FatigueScore\n");
    scanf_s("%d", &nCurrentFatigueScore);


    printf("How much is consumed per entry?\n");
    scanf_s("%d", &nEntryConsumeFatigue);



    if ((nCurrentFatigueScore / nEntryConsumeFatigue) >= 1)
        nEntryCount = nCurrentFatigueScore / nEntryConsumeFatigue;

    if (nCurrentFatigueScore / nEntryConsumeFatigue < 1)
        nEntryCount = 0;



    if (nEntryCount >= 1)
    {
        printf("You can enter %d consumed dungeons %d times.", nEntryConsumeFatigue, nEntryCount);

    }


    if (nEntryCount == 0)
    {
        printf("You can not enter the dungeon.");

    }

}