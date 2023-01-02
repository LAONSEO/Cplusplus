
#include <iostream>

int countCharFromString(const char* str1, int nstr1Length, int nSomethingChoice);

int main()
{
    char str1[8] = "aaaaabc";
    int nIndex1{};

    printf("%d\n", countCharFromString(str1, 8, 'a'));
}

int countCharFromString(const char* str1, int nstr1Length, int nSomethingChoice)
{
    int nCount{};
    for (int i = 0; i < nstr1Length; i++)
    {
        if (str1[i] == nSomethingChoice)
        {
            nCount++;
        }
    }
    return nCount;
}