// PracticeFunction_start9.cpp

#include <iostream>

int main()
{
    char c{};

    c = 100; // char 자료형인 변수 c에 100 이라는 값을 복사함.
    printf("%d\n", c);

    c = 100; // ASCII code 에서 index No. 를 나타내는 것.
    printf("%c\n", c);

    c = 'A'; // 작은 따옴표를 통해 ASCII code 의 index No. 65 에 해당하는 기호, A를 부여하겠다.
    printf("%d\n", c); // index No. 65 이므로 65 출력.

    // backspace, 행동에 관련된 기호들(0 ~ 31, 127)은 표시할 수 없으므로 또 기호를 붙여줘야 표현 가능하다. printf 에 "" 안에 들어가는 \n 이런것도 아스키코드.
    c = '\b'; // \는 행동에 관련된 기호 표기하려는 기호 + b는 아스키 코드표에서 백스페이스. 따라서 c 에는 index No. 8 이 부여되었으나,
    printf("%d\b", c); // printf 구문에서 진짜로 backspace 명령을 내렸기에 이대로라면 c에 어떤 값이 들어가던 backspace 한칸 간 효과가 나온다.

    c = 'a'; // ASCII code 의 index No. 65 에 해당하는 기호, a를 부여하겠다.
    printf("%d\n", c); // 97

    c = '\0'; // null. 없다의 의미를 지닌다.
    printf("%d\n", c); // 없다는 의미의 0 출력.

    c = '\''; //그래도 입력이 안되는 애들은 \ 또는 ' 의 경우 \는 \\ 로 입력.
    printf("%d\n", c); // ' 는 ASCII code 의 index No. 39 이다.
}