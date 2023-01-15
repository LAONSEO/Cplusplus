// 문자열을 문자열에 복사하는 프로그램.
// Src 문자열이 Dst 에 다 들어가기만 하면 성공 + 꽉차도 성공 + 넘치면 실패

#include <iostream>

bool stringCopy(char* strDst, int nDstLength, const char* strSrc);

int main()
{
    char strData1[8] = "";
    char strData2[8] = "abcdabc";

    if (stringCopy(strData1, 8, strData2))
        printf("성공\n");
    else
        printf("실패\n");

    printf("%s\n", strData1);
}

bool stringCopy(char* strDst, int nDstLength, const char* strSrc)
{
    int nDstIndex{};
    int nSrcIndex{};

    while (nDstIndex < nDstLength && strSrc[nSrcIndex] != '\0')
    {
        strDst[nDstIndex] = strSrc[nSrcIndex];

        nDstIndex++;
        nSrcIndex++;
    }
    strDst[nDstIndex] = '\0';

    if (nDstIndex <= nDstLength)
    {
        return true;
    }

    return false;
}

//수업시간에 만들었던 배열이 꽉차야만 성공하는 형태.
//#include <iostream>
//
//bool stringCopy(char* strDst, int nDstLength, const char* strSrc);
//
//int main()
//{
//    char strData1[16] = "zzzzzzz";
//    char strData2[32] = "aabbcccddd";
//
//    if (stringCopy(strData1, 16, strData2))
//        printf("성공\n");
//    else
//        printf("실패\n");
//
//    printf("%s\n", strData1);
//}
//
//bool stringCopy(char* strDst, int nDstLength, const char* strSrc)
//{
//    int nDstIndex{};
//    int nSrcIndex{};
//
//    while (nDstIndex < nDstLength - 1 && strSrc[nSrcIndex] != '\0')
//    {
//        strDst[nDstIndex] = strSrc[nSrcIndex];
//
//        nDstIndex++;
//        nSrcIndex++;
//    }
//    strDst[nDstIndex] = '\0';
//
//    if (strSrc[nSrcIndex] != '\0')
//        return true;
//
//    return false;
//}