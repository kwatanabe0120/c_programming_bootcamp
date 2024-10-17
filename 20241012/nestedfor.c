#include<stdio.h>

int main ()
{
	int n;
	int a, b;
	int linecount = 0;
	printf("Please enter the number:");
	scanf("%d", &n);

	for (a = 1; a <= n; a++)
	{
		linecount = linecount+1;
		for (b = 1; b <= a; b++)
		{
			printf("%d", b);
		}
		printf("\n");
	}

	return 0;
}