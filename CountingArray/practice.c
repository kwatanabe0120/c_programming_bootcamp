#include <stdio.h>




int main()
{
	int array[20]= {0,5,4,9,5,8,2,3,1,5,4,9,5,5,2,7,6,5,4,1};
	int count[10]= {0};
	int maxIndex = 0;

	for (int i = 0; i < 20; i++)
	{
		count[array[i]]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (count[i] > count[maxIndex])
		{
			maxIndex = i;
		}
	}
	printf("Number %d appeared most of the times, total of %d appearances\n",maxIndex, count[maxIndex]);

	return 0;
}