class C_DATA
{
private:
	int* m_pData;
public:
	C_DATA();
	void setData(int nData);
	int getData();
};

#include <iostream>

int main()
{
	C_DATA c1{};

	c1.setData(100);

	C_DATA c2 = c1;

	printf("%d\n", c2.getData());

	c1.setData(99);
	printf("%d\n", c1.getData());
}

C_DATA::C_DATA()
	: m_pData{}
{
	m_pData = new int{};
}
void C_DATA::setData(int nData)
{
	*m_pData = nData;
}
int C_DATA::getData()
{
	return *m_pData;
}