#include <stdio.h>

int main()
{
	char sourceArray[12] = {'H','F','F','T','S','F','S','F','Q','T','U','W'};
	int countArray[26]= {0};

	for (int i = 0; i < 12; i++)
	{
		countArray[sourceArray[i]-'A']++;
	}
	int maxIndex = 0;
	for (int i = 0; i < 26; i++)
	{
		if (countArray[i] > countArray[maxIndex])
			maxIndex = i;
	}
	printf("The char:%c\nHow many times:%d", maxIndex+'A', countArray[maxIndex]);
	
	
	return 0;
}