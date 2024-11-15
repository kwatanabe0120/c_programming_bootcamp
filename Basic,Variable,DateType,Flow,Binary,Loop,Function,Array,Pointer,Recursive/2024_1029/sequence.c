#include <stdio.h>

long getlength(int num)
{
	long lenght = 0;

	if (num <= 0)
		return 0;

	if (num < 10)
	{
		for(int i = 0; i <= num; i++)
		{
			lenght = (lenght * 10) + i;
		}
	}
	else 
	{
		for(int i = 1; i <= num; i++)
		{
			lenght = (lenght * 10) + 9;
		}
	}
	return lenght;
}


int main()
{
	int num;
	printf("Please enter the number(length): ");
	scanf("%d", &num);

	printf("The result is %ld\n", getlength(num));
	return 0;
}