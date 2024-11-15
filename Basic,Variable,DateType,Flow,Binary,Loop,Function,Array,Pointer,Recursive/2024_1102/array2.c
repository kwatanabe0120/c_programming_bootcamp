#include <stdio.h>


int main ()
{
	int i, maxIndex;
	int numbers[6];

	for (i = 0; i < 6 ; i++)
	{
		printf("Please enter the valude for array[%d]", i);
		scanf("%d", &numbers[i]);
	}

	maxIndex = 0;

	for (i = 1; i < 6; i++)
	{
		if(numbers[i] > numbers[maxIndex])
			maxIndex = i;
	}

	printf("The max index is %d", maxIndex);

	return 0;
}