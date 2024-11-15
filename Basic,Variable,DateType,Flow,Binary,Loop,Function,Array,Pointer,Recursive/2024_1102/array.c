#include <stdio.h>

int main ()
{
	int numbers[] = {0,9,0,1,2,3,4,5,6,7,8};
	int maximum = numbers[0];

	for (int i = 1; i < 11; i++)
	{
		if (maximum < numbers[i])
			maximum = numbers[i];
	}
	printf("The Maximum number is %d\n", maximum);

	return 0;
}