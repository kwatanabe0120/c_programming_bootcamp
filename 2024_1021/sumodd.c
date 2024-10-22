#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, temp, oddsum = 0;

	printf("Enter the n (number fo values in a sequence): ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("Enter the number: ");
		scanf("%d",&temp);

		if(temp < 0)
		{
			printf("Please enter positive value");
			exit(0);
		}
		if (temp % 2 != 0)
			oddsum +=temp;
	}

	printf("The total of odd is %d", oddsum);

	return 0;
}