// ���ڿ��� ���ڿ��� �����ϴ� ���α׷�.
// Src ���ڿ��� Dst �� �� ���⸸ �ϸ� ���� + ������ ���� + ��ġ�� ����

#include <iostream>

bool stringCopy(char* strDst, int nDstLength, const char* strSrc);

int main()
{
    char strData1[8] = "";
    char strData2[8] = "abcdabc";

    if (stringCopy(strData1, 8, strData2))
        printf("����\n");
    else
        printf("����\n");

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

//�����ð��� ������� �迭�� �����߸� �����ϴ� ����.
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
//        printf("����\n");
//    else
//        printf("����\n");
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