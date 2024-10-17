#include <stdio.h>

int main ()
{
	int n, count=1;
	int i,j,k, space;
	printf("Enter the number: ");
	scanf("%d", &n);

	space = n - 1;

	for (i =1; i <= n; i++)
	{
		for(k =space; k >= 1; k--)
		{
				printf(" ");
		}
		for(j = 1; j <= i; j++)
		{
		
			printf("%d ", count);
			count++;
			
		}
		printf("\n");
		space--;
	}

	return 0;
}