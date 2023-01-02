#include <iostream>

int strLegnth(const char* str);

int main()
{
    char str1[64] = "aabbcc";

    printf("%d\n", strLegnth(str1));
}

int strLegnth(const char* str)
{
    int nIndex{};

    while (str[nIndex] != '\0')
    {
        nIndex++;
    }
    return nIndex;
}

//#include <iostream>
//
//int countStringChar(const char* str);
//
//int main()
//{
//    char strtest[16] = "didndy";
//
//    printf("%d\n", countStringChar(strtest));
//}
//
//int countStringChar(const char* str)
//{
//    int nCount{};
//    while (*str)
//    {
//        str++;
//        nCount++;
//    }
//    return nCount;
//}