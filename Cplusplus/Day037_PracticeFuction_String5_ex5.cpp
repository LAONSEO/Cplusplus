// ���ڿ��� ���ĺ� a-z���� �� ���� �ִ��� ���� ���α׷�.

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