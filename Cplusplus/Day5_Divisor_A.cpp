// ù��° ���� �Է��� �� �ι�° ���� �Է����� �� �ι�°�� ù��° ���� ������� �˾ƺ��� ���α׷�
// ����̸� �������� 0�̹Ƿ� ����Դϴ� ��� ���
// ����� �ƴϸ� �������� ?�̹Ƿ� ����� �ƴմϴ� ��� ���.

#include <iostream>

int main()
{
    int nDst{};
    int nSrc{};
    int nRemainer{};

    scanf_s("%d", &nDst);
    scanf_s("%d", &nSrc);

    nRemainer = nDst % nSrc;

    if (nRemainer == 0)
    {
        printf("It is a divisor because the remainder is 0.");
    }

    if (nRemainer != 0)
    {
        printf("It is not a divisor because the remainder is %d.", nRemainer);
    }

}