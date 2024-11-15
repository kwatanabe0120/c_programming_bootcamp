#include <stdio.h>

void printMaxdigit(int num)
{
	int tens, remainding;

	if (num > 9 && num < 100)
	{
		tens = num / 10;
		remainding = num % 10;

		if (tens > remainding)
			printf("The maximum digit = %d", tens);
		else if (tens == remainding)
			printf("It has same number for the digits");
		else
			printf("The maximum digit = %d", remainding);
	}
	else
		printf("Error!!");
}


int main()
{
	int num;

	printf("Enter 2 digit num: ");
	scanf("%d", &num);
	printMaxdigit(num);
	
	return 0;
}