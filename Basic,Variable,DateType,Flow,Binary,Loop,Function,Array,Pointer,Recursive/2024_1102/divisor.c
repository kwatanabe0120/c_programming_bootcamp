#include <stdio.h>

int	sumOfDivisors(int num)
{
	int sum = 0;
	int i =1;

	while (num >= i)
	{
		if (num % i == 0)
		{
			sum +=i;
		}
		i++;
	}
	return sum;
}

int	optimizedSumOfDivisors(int num)
{
	int i;
	int sum = 1;
	if (num == 1)
		return 1;
	for (i = 2 ; i*i < num; i++)
	{
		if(num % i == 0)
			sum = sum + i + num/i;
	}
	if (i*i == num)
		sum = sum +i;
	return sum+num;

}



int main()
{
	int result;
	int num;

	printf("Please enter num: ");
	scanf("%d",&num);
	// result = sumOfDivisors(num);
	result = optimizedSumOfDivisors(num);
	printf("The sum of Divisor is %d\n", result);

	return 0;
}