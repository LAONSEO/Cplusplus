// �ҹ��ڸ� �빮�ڷ� �ٲ��ִ� �Լ�. (ASCII code �ҹ��� - 32 = �빮��)

#include <iostream>

void changeprintCharCapitalOrSmall(char* c);

int main()
{
    char str2[] = "a";

    changeprintCharCapitalOrSmall(str2);
}

void changeprintCharCapitalOrSmall(char* c)
{
    *c = *c - 32;
    printf("%c\n", *c);
}