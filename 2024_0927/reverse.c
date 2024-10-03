#include<stdio.h>

int main()
{
	// 365
	int num;
	int hundred, tens, remainding;
	printf("Enter 3 digit num: ");
	scanf("%d", &num);

	hundred = num / 100;
	tens = num / 10 % 10;
	remainding = num % 10;

	printf("The reverse is %d%d%d", remainding, tens, hundred);

	return (0);
}