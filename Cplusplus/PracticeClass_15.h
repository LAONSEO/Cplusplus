#pragma once

class C_DATA
{
private:
	int* m_pData;

public:
	C_DATA();
	~C_DATA();

	void setData(int nData);
	int getData();
};