// 소문자를 대문자로 바꿔주는 함수. (ASCII code 소문자 - 32 = 대문자)

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