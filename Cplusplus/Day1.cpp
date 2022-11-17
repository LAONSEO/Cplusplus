#include <iostream>

int main()
{

    int nData1{};
    int nData2{};
    int nData3{};
    float nData4{};

    int Total1{};
    int Total2{};
    int Total3{};
    float Total4{};

    nData1 = 10;
    nData2 = 2;
    nData3 = 5;
    nData4 = 0.25;

    Total1 = nData2 + nData1 * nData3;
    Total2 = (nData1 + nData2) * nData3 / nData1;
    Total3 = nData3 / nData4;
    Total4 = nData3 / nData4;

    std::cout << Total1 << "\n";
    std::cout << Total2 << "\n";
    std::cout << Total3 << "\n";
    std::cout << Total4 << "\n";

}