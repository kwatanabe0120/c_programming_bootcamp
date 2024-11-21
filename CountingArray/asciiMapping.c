#include<stdio.h>

int main()
{
	char sourceArray[8] = {'k', 'z', 'b', 'r', 'z', 'k', 'z', 'm'};
	int countArray[26] = {0};

	for(int i = 0; i < 8; i++)
	{
		countArray[sourceArray[i]- 'a']++;
	}
	int maxIndex = 0;
	for(int i = 0; i < 26; i++)
	{
		if(countArray[i] > countArray[maxIndex])
			maxIndex = i;
	}
	printf("The value:%c\nHow many times:%d\n", maxIndex+ 'a', countArray[maxIndex]);
	
	return 0;
}