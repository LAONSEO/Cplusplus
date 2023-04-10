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


    mapData.insert(std::make_pair(15, 3.23f)); // 템플릿함수..? 쓸데없이 함수를 늘릴 이유가 없어.
    mapData.insert(std::map<int, float>::value_type(20, 9.9f));
    mapData.insert({ 30, 0.5f }); // 유니폼 초기화.
    mapData[40] = 99.99f; // 맵 컨테이너에 대괄호 기능을 절대로 쓰지마. // 성공실패유무가 없기도 하다.
    //printf("find key %d, value %f\n", 99, mapData[99]); // 찾았는데 없으면 key 값을 꼽아버려.
    //mapData.erase(30);

    mapData[10] = 99.99f; // 심지어 값을 덮어버리기 까지 함.
    //대괄호는 아예 대응할 방안이 없다 : STL map 을 사용할 때는 대괄호 [ ] 는 없는 기능이다.

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
    //    printf("없다\n");
}