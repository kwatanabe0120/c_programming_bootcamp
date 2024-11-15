#include <stdio.h>

int main()
{
	int array[] = {5,7,1,5,100};
	int i;
	int max;
	int partMax1, partMax2;

	max = array[0]+array[1];

	for (i = 1; i < 4; i++)
	{
		if(array[i]+array[i+1] > max)
		{
			max = array[i]+array[i+1];
			partMax1 = array[i];
			partMax2 = array[i+1];
		}
	}
	printf("The largest sun is %d\n", max);
	printf("It wad combination of %d and %d\n", partMax1, partMax2);

	return 0;
}