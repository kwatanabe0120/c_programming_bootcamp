#include <stdio.h>


int main()
{
	int array[10];
	int nonUniqueCount = 0;
	int i, j;
	int foundDupricated = 0;

	for (i = 0; i < 10; i++)
	{
		printf("Please enter the value for #%d: ", i+1);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < 10; i++)
	{
		foundDupricated = 0;
		// 前方チェック
		for(j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				foundDupricated = 1;
				break;
			}
		}
		if (foundDupricated == 1)
			continue;
		else
			for (j = i+1; j < 10;j++)
			{
				if(array[i] == array[j])
				{
					printf("non-unique value: %d\n", array[i]);
					nonUniqueCount++;
					break;
				}
			}
	}
	printf("The number of non-Unique value is %d\n",nonUniqueCount);

	return 0;
}