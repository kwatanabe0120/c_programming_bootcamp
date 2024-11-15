#include<stdio.h>

unsigned long long returnFactorial(int number)
{
	unsigned long long factorial = 1;

	if (number < 0)
	{
		// printf("Please enter positive number\n");
		return (-1);
	}
	for (int i = 1; i <= number; i++)
			factorial = factorial * i;
	return factorial;
	
}

int main ()
{
	int mynum;
	printf("Please enter the number: ");
	scanf("%d", &mynum);

	printf("The factorial(%d)is %llu\n",mynum,returnFactorial(mynum));

	return 0;
}