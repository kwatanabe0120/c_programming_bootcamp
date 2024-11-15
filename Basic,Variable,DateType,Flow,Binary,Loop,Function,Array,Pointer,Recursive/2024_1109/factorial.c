#include <stdio.h>


int factorial(int num)
{
	if (num == 1)
		return 1;
	return num * factorial(num-1);
}

int main()
{
	int result; int num;

	do
	{
		printf("Please enter a value for num: ");
		scanf("%d", &num);
		/* code */
	} while (num < 0);
	
	result = factorial(num);
	printf("The result is %d\n", result);
	
	return 0;
}