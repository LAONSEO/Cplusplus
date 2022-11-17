// 첫번째 수를 입력한 후 두번째 수를 입력했을 때 두번째가 첫번째 수의 약수인지 알아보는 프로그램
// 약수이면 나머지가 0이므로 약수입니다 라고 출력
// 약수가 아니면 나머지가 ?이므로 약수가 아닙니다 라고 출력.

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
