// ���� ������ if�� + ũ�ų� �۴� or �۰ų� ũ��
// ������������ : �Ƿε��� n�Ҹ��ϴ� ������ ���� n�Ƿε��� ������ ?ȸ �� �� �ִ���?

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