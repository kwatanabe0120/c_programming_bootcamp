#include<stdio.h>

int totalDigits(int num)
{
	if (num == 0)
		return 0;
	
	return 1 + totalDigits(num/10);
}

int main()
{
	int test = 572398;

printf("The total digits of %d is %d", test, totalDigits(test));

	return 0;
}