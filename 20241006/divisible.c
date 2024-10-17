#include <stdio.h>

int main ()
{
	int a, b, c;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	// int min = a;

	// if (min > b)
	// 	min = b;

	// if (min > c)
	// 	min = c;
	
	// if (a % min == 0 && b % min == 0 && c % min == 0)
	// 	printf("All numbers are divisible by %d\n", min);
	// else
	// 	printf("All numbers are not divisible by %d\n", min);	


	// (a, b), (b, c), (a, c)
	if (a == 0 || b == 0 || c == 0)
		printf("Do not use 0");
	else if ((a % b == 0 || b % a ==0) && ((b % c == 0 || c % b ==0)) && ((a % c == 0 || c % a ==0)))
		printf("diviable!");
	else
		printf("Not diviable!");


	return 0;
}