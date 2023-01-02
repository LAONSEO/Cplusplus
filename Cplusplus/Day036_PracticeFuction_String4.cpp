
#include <iostream>

bool stringCopyFromChar(char* str, int nBufferSize, char cContents, int nCopyCount = 1);

int main()
{
	char str1[64]{};
	int nstrLength(64);

	stringCopyFromChar(str1, 64, 'a', 5);
	printf("%s\n", str1);
}

bool stringCopyFromChar(char* str, int nBufferSize, char cContents, int nCopyCount)
{
	if (nBufferSize < (nCopyCount + 1))
	{
		return false;
	}

	for (int i = 0; i < nCopyCount; i++)
	{
		str[i] = cContents;
	}
	str[nCopyCount] = '\0';

	return true;
}