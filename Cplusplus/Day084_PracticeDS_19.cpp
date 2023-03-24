// PracticeDS_19.cpp : static in class.

class PracticeDS_19_C_DATA
{
private:
    int m_nData;

private:
    PracticeDS_19_C_DATA() = default;

public:
    void PracticeDS_19_C_DATA_setData(int nData);
    int PracticeDS_19_C_DATA_getData();
    static PracticeDS_19_C_DATA* PracticeDS_19_C_DATA_getInstance();
};

#include <iostream>

int main()
{
    PracticeDS_19_C_DATA::PracticeDS_19_C_DATA_getInstance()->PracticeDS_19_C_DATA_setData(100);
    printf("%d\n", PracticeDS_19_C_DATA::PracticeDS_19_C_DATA_getInstance()->PracticeDS_19_C_DATA_getData());
}

void PracticeDS_19_C_DATA::PracticeDS_19_C_DATA_setData(int nData)
{
    m_nData = nData;
}

int PracticeDS_19_C_DATA::PracticeDS_19_C_DATA_getData()
{
    return m_nData;
}

PracticeDS_19_C_DATA* PracticeDS_19_C_DATA::PracticeDS_19_C_DATA_getInstance()
{
    static PracticeDS_19_C_DATA cData{};
    return &cData;
}