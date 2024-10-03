#include<stdio.h>

int main ()
{
	int x;
	int x2, x4, x6, x8;
	printf("Enter a number: ");
	scanf("%d", &x);

	x2 = x*x;
	x4 = x2*x2;
	x6 = x4*x2;
	x8 = x4*x4;

	printf("x2 = %d\nx4 = %d\nx6 = %d\nx8 = %d", x2, x4, x6, x8);


	return 0;
}