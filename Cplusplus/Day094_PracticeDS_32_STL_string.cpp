// PracticeDS_32.cpp : STL string.

#include <iostream>
#include <string>

int main()
{
	std::string str1{};
	std::string str2{};
	std::string str3{};

	str1 = "aaaaa";
	str2 = "'zzzzz'";

	str3 = str1 + str2;

	printf("%s\n", str3.c_str());
}