// (intentionally) fail code.

class C_DATA
{
private:
	int m_pData;

public:
	C_DATA() = default;
	C_DATA(const C_DATA&) = delete; // just focus on this point.
};

#include <iostream>

void func(C_DATA c);

int main()
{
	C_DATA cData{};

	func(cData);
}

void func(C_DATA c)
{
}