#include <stdio.h>

int main()
{
	int array[10];
	int foundDupricated =0;
	int i, j;
	int count = 0;

	for (i =0; i < 10; i++)
	{
		printf("Please enter the value for #%d: ", i+1);
		scanf("%d", &array[i]);
	}

	for (i = 0; i<10; i++)
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
			for(j = i + 1; j < 10; j++)
			{
				if(array[i] == array[j])
				{
					printf("%d is not unique number\n", array[i]);
					count++;
					break;
				}
			}
	}
	printf("The non unique number count is %d", count);


	return 0;
}