# include <stdio.h>

int main ()
{
	int num, pow;
	int answer, caluculate_pow;
	printf("Put number: ");
	scanf("%d", &num);
	printf("Put Power: ");
	scanf("%d", &pow);

	answer = num;
	caluculate_pow = pow;
	

	while (caluculate_pow > 1)
	{
		answer = answer * answer;
		caluculate_pow--;
	}

	printf("The number of %d, Power %d is %d",num, pow, answer);
	return 0;
}