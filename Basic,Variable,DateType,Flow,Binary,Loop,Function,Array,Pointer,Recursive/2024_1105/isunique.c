#include<stdio.h>


int main()
{
	int size;
	int isDuplicate = 0;
	int count = 0;
	printf("Please enter the size of arry: ");
	scanf("%d",&size);

	int array[size];

	for (int i = 0; i < size; i++)
	{
		printf("Please enter the value for array[%d]", i);
		scanf("%d", &array[i]);
	}

	// 1,2,3,4,5,
	// array[5] = 1,2,3,4,5

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
				continue;
			if (array[i] == array[j])
				{
					isDuplicate = 1;
					break;
				}

		}
		if (isDuplicate == 0)
		{
			printf("%d is unique number\n", array[i]);
			count++;
		}
		isDuplicate = 0;
	}
	printf("The total number of unique num is %d\n", count);
		
	return 0;
}