// PracticeFunction_start9.cpp

#include <iostream>

int main()
{
    char c{};

    c = 100; // char �ڷ����� ���� c�� 100 �̶�� ���� ������.
    printf("%d\n", c);

    c = 100; // ASCII code ���� index No. �� ��Ÿ���� ��.
    printf("%c\n", c);

    c = 'A'; // ���� ����ǥ�� ���� ASCII code �� index No. 65 �� �ش��ϴ� ��ȣ, A�� �ο��ϰڴ�.
    printf("%d\n", c); // index No. 65 �̹Ƿ� 65 ���.

    // backspace, �ൿ�� ���õ� ��ȣ��(0 ~ 31, 127)�� ǥ���� �� �����Ƿ� �� ��ȣ�� �ٿ���� ǥ�� �����ϴ�. printf �� "" �ȿ� ���� \n �̷��͵� �ƽ�Ű�ڵ�.
    c = '\b'; // \�� �ൿ�� ���õ� ��ȣ ǥ���Ϸ��� ��ȣ + b�� �ƽ�Ű �ڵ�ǥ���� �齺���̽�. ���� c ���� index No. 8 �� �ο��Ǿ�����,
    printf("%d\b", c); // printf �������� ��¥�� backspace ����� ���ȱ⿡ �̴�ζ�� c�� � ���� ���� backspace ��ĭ �� ȿ���� ���´�.

    c = 'a'; // ASCII code �� index No. 65 �� �ش��ϴ� ��ȣ, a�� �ο��ϰڴ�.
    printf("%d\n", c); // 97

    c = '\0'; // null. ������ �ǹ̸� ���Ѵ�.
    printf("%d\n", c); // ���ٴ� �ǹ��� 0 ���.

    c = '\''; //�׷��� �Է��� �ȵǴ� �ֵ��� \ �Ǵ� ' �� ��� \�� \\ �� �Է�.
    printf("%d\n", c); // ' �� ASCII code �� index No. 39 �̴�.
}