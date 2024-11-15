#include<stdio.h>

// print all unique elements in an array
// count the number of unique elements in an array


int main ()
{
	int array[10];
	int count = 0;
	int i, j;
	int isDupricated = 0;

	for (i = 0; i < 10; i++)
	{
		printf("Please enter the value for #%d: ", i+1);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < 10; i++)
	{
		isDupricated = 0;

		for(j = 0; j<10; j++)
		{
			if (i == j)
				continue;
			if(array[i] == array[j])
			{
				isDupricated = 1;
				break;
			}
		}
		if (isDupricated == 0)
		{
			printf("%d is unique number\n", array[i]);
			count++;
		}
	}
	printf("The number of unique number is %d\n", count);

	return 0;
}
