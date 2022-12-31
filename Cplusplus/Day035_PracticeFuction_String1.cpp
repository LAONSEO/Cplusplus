#include <iostream>

int main()
{
    char str1[7]{ 97,97,98,98,99,48,'\0' }; // "aabbcc4650" 이라고 들어갈 때 0은 null문자 0 아니고 아스키코드에서 따져야함. // 48번이더라.
    char str2[7] = "aabbcc"; // 겉으로볼땐 6개, 실제론 7개 (나머지 1개는 \0)
    int str3[6]{ 1,1,1,2,2,2 };
    int nIndex1{};
    int nIndex2{};
    int nIndex3{};


    while (str1[nIndex1] != '\0') // \0 대신 0 쓰면 의미적으로 안돼.
    {
        printf("%c ", str1[nIndex1]);
        nIndex1++;
    }

    printf("\n");

    while (str2[nIndex2] != '\0')
    {
        printf("%c ", str2[nIndex2]);
        nIndex2++;
    }

    printf("\n");

    while (nIndex3 <= 5)
    {
        printf("%d ", str3[nIndex3]);
        nIndex3++;
    }
}