// string 에 있는 배열을 %s 를 쓰지 않고 출력.

#include <iostream>

void printString(const char* Str);

int main()
{
    char str[64] = "aabbcc";
    int nIndex{};

    printString(str);
    // == printf("%s", str);
}

void printString(const char* Str)
{
    int nIndex{};

    while (Str[nIndex] != '\0')
    {
        printf("%c ", Str[nIndex]);
        nIndex++;
    }
}