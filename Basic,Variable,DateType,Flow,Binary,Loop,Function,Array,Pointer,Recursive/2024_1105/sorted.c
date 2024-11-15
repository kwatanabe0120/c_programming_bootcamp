#include<stdio.h>

int main()
{
	int size;
	// asumption isReallySorted
	int isSorted = 0;
	int notSorted = 0;

	printf("Please enter the size of array: ");
	scanf("%d", &size);
	int array[size];

	for (int i = 0; i < size; i++)
	{
		printf("Please enter the value for array[%d]", i);
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < size -1; i++)
	{
		if(array[i] > array[i+1])
		{
			notSorted = 1;
			break;
		}
	    if(array[i] == array[i+1])
		{
			isSorted = 1;
		}
	}
	if (notSorted == 1)
		printf("Not Sorted!");
	else if (isSorted == 1)
		printf("isSorted!");
	else if (isSorted == 0 && notSorted == 0)
		printf("Really Sorted!");
		
	return 0;
}