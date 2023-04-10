#include <iostream>
#include <map>

int main()
{
    std::map<int, float> mapData{};

    //std::pair<int, float> pairData{};
    //pairData.first = 10;
    //pairData.second = 5.5f;

    //mapData.insert(pairData);

    mapData.insert(std::pair<int, float>(10, 5.5f));


    mapData.insert(std::make_pair(15, 3.23f)); // ���ø��Լ�..? �������� �Լ��� �ø� ������ ����.
    mapData.insert(std::map<int, float>::value_type(20, 9.9f));
    mapData.insert({ 30, 0.5f }); // ������ �ʱ�ȭ.
    mapData[40] = 99.99f; // �� �����̳ʿ� ���ȣ ����� ����� ������. // �������������� ���⵵ �ϴ�.
    //printf("find key %d, value %f\n", 99, mapData[99]); // ã�Ҵµ� ������ key ���� �žƹ���.
    //mapData.erase(30);

    mapData[10] = 99.99f; // ������ ���� ��������� ���� ��.
    //���ȣ�� �ƿ� ������ ����� ���� : STL map �� ����� ���� ���ȣ [ ] �� ���� ����̴�.

    std::map<int, float>::iterator iter = mapData.begin();
    while (iter != mapData.end())
    {
        printf("key %d, value %f\n", (*iter).first, iter->second);
        iter++;
    }

    std::map<int, float>::iterator iterFind{};

    //iterFind = mapData.find(99);
    //if (iterFind != mapData.end())
    //{
    //    printf("find key %d, value %f\n", iterFind->first, iterFind->second);
    //}
    //else
    //    printf("����\n");
}