#include <iostream>

int main()
{
    char str1[7]{ 97,97,98,98,99,48,'\0' }; // "aabbcc4650" �̶�� �� �� 0�� null���� 0 �ƴϰ� �ƽ�Ű�ڵ忡�� ��������. // 48���̴���.
    char str2[7] = "aabbcc"; // �����κ��� 6��, ������ 7�� (������ 1���� \0)
    int str3[6]{ 1,1,1,2,2,2 };
    int nIndex1{};
    int nIndex2{};
    int nIndex3{};


    while (str1[nIndex1] != '\0') // \0 ��� 0 ���� �ǹ������� �ȵ�.
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