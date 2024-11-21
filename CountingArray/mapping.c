#include<stdio.h>

int main()
{
	// 5-10
	int sourceArray[8] = {7,5,6,9,7,7,10,7};
	int countArray[6] = {0};
	int maxIndex = 0;

	for (int i = 0; i < 8; i++)
	{
		countArray[sourceArray[i]-5]++;
	}
	for (int i = 0; i < 6; i++)
	{
		if (countArray[i] > countArray[maxIndex])
			maxIndex = i;
	}
	printf("The value:%d\nHow many times:%d\n", maxIndex+5, countArray[maxIndex]);

	return 0;
}