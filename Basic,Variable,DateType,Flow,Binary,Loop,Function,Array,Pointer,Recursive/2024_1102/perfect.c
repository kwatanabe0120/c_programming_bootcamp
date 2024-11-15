#include <stdio.h>

int sumOfDivisors(int num)
{
	int i;
	int sum = 1;

	for (i = 2; i*i <= num ; i++)
	{
		if (num % i == 0)
		{
			if (i*i == num)
				sum = sum + i;
			else
				sum = sum + i + num/i;
		}
	}
	return sum;
}

int isPerfect(int num)
{
	if (num <= 1)
		return 0;
	if (num == sumOfDivisors(num))
		return 1;
	return 0;
}


int main(){
	int num, result;
	printf("Please enter num: ");
	scanf("%d", &num);

	result = isPerfect(num);
	if (result == 1)
		printf("The number of %d is perfect number!\n", num);
	else
		printf("The number of %d is NOT perfect number!\n", num);
	return 0;
}