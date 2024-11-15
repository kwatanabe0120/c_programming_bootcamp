#include <stdio.h>


int main()
{
	int i;
	int pullUpsArray[10]= {3,4,5,7,8,7,9,7,9,10};

	for (i = 9; i >= 0; i--)
	{
		printf("The day %d, you did %d times pullups\n", i+1, pullUpsArray[i]);
	}

	return 0;



}