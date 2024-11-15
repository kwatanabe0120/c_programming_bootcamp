#include<stdio.h>

int main()
{
	int array[10];
	int i, j, count = 0;
	int foundDupricated = 0;


	for(i = 0; i < 10; i++)
	{
		printf("Enter the value for %d: ", i+1);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < 10; i++)
	{
		foundDupricated = 0;

		for(j = 0; j < i; j++)
		{
			if(array[i] == array[j])
			{
				foundDupricated = 1;
				break;
			}
		}
		if (foundDupricated == 1)
			continue;
		else
			for(j = i+1; j < 10; j++)
			{
				if (array[i] == array[j])
				{
					printf("%d is non_unique value\n", array[i]);
					count++;
					break;
				}
			}
	}
	printf("The counter is %d\n", count);


	return 0;
}