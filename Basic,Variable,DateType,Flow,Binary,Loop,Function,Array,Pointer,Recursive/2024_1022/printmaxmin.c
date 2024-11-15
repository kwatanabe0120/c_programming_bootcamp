#include<stdio.h>

void	printMaxMin(int num1, int num2)
{
	if (num1>num2)
	{
		printf("Maximum = %d, Minimum = %d", num1, num2);
	}
	else if ( num1 == num2)
		printf("The function got the same number!");
	else
		printf("Maximum = %d, Minimum = %d", num2, num1);
}

int	main()
{
	int a, b;
	printf("enter number1: ");
	scanf("%d", &a);
	printf("enter number2: ");
	scanf("%d", &b);
	printMaxMin(a,b);
	return 0;
}