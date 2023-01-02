// 문자열을 문자열에 복사해주는 함수.

#include <iostream>

bool copyStringToString(const char* str1, int nstr1Length, char* str2, int nstr2);

int main()
{
    char str1[12] = "acacadadaz\0";
    char str2[16]{};
    char str3[8]{};

    int nLength_str1(12);
    int nLength_str2(16);
    int nLength_str3(8);

    if (copyStringToString(str1, 12, str2, 16))
    {
        printf("success\n");
    }
    else
    {
        printf("fail\n");
    }

    for (int i = 0; i < nLength_str2; i++)
    {
        printf("%c ", str2[i]);
    }

    //if (copyStringToString(str1, 12, str3, 8))
    //{
    //    printf("success\n");
    //}
    //else
    //{
    //    printf("fail\n");
    //}

    //for (int i = 0; i < nLength_str2; i++)
    //{
    //    printf("%c ", str3[i]);
    //}
}

bool copyStringToString(const char* str1, int nstr1Length, char* str2, int nstr2Length)
{
    if (nstr1Length > nstr2Length)
    {
        return false;
    }

    for (int i = 0; i < nstr1Length; i++)
    {
        str2[i] = str1[i];
    }

    return true;
}