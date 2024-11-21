#include <stdio.h>

#define SIZE 8

int main()
{
	int array[SIZE]={0,5,4,2,1,3,2,0};
	int counttingArrat[6] = {0};

	for (int i = 0; i < SIZE; i++)
	{
		counttingArrat[array[i]]++;
	}

	printf("The number of each element in the array is:\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d: %d\n", i, counttingArrat[i]);
	}
	return 0;
}