// PracticeDS_29_template_class.cpp

#include <iostream>

template<class T>
class PracticeDS_29_C_DATA
{
private:
    T m_tData;
public:
    PracticeDS_29_C_DATA() = default;
    void setData(T tData)
    {
        m_tData = tData;
    }
    T getData()
    {
        return m_tData;
    }
};

template<>
class PracticeDS_29_C_DATA<char>
{
private:
    char m_cData;
public:
    PracticeDS_29_C_DATA() = default;
    void setData(char cData)
    {
        m_cData = cData;
    }
    char getData()
    {
        printf("get char Æ¯¼öÈ­\n");
        return m_cData;
    }
};

int main()
{
    PracticeDS_29_C_DATA<int> cInt{};
    PracticeDS_29_C_DATA<float> cFloat{};
    PracticeDS_29_C_DATA<char> cChar{};

    cInt.setData(100);
    printf("%d\n", cInt.getData());

    cFloat.setData(10.5);
    printf("%f\n", cFloat.getData());

    printf("\n");

    cChar.setData('A');
    printf("%c\n", cChar.getData());
}