#include<stdio.h>


int main()
{
	int size;
	int i;
	int temp;
	
	printf("Please enter the size of array: ");
	scanf("%d", &size);

	int array[size];

	for(i = 0; i < size; i++)
	{
		printf("Please enter the value for array[%d]", i);
		scanf("%d", &array[i]);
	}

	temp = array[0];

	for(i = 1; i< size; i++)
	{
		 array[i-1] = array[i];
	}

	array[size-1] = temp;

	for (i = 0; i< size; i++)
		printf(" %d", array[i]);

	return 0;
}