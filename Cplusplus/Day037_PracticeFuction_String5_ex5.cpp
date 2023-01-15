// 문자열에 알파벳 a-z까지 몇 개씩 있는지 세는 프로그램.

#include <iostream>

int main()
{
    char str[64] = "aaseopgajspgwjfkopekfekpwkfp";
    int arCountABC[127]{};
    int nLength_str{};
    int nLength_ABC{};


    for (int i = 0; str[i] != '\0'; i++)
    {
        arCountABC[str[i]]++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c : %d\n", i, arCountABC[i]);
    }
}