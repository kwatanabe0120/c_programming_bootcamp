#include<stdio.h>

int	main()
{
	int num, multipliocation;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the multipliocation: ");
	scanf("%d", &multipliocation);

	for (int i = 1 ; i <= multipliocation; i++)
	{
		printf("%d * %d = %d\n", num, i, num*i);
	}

	return 0;
}