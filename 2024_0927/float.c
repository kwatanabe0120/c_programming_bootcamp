#include <stdio.h>

int main()
{
	float num;
	printf("Float num: ");
	scanf("%f", &num);

	printf("The integer part = %d \n", (int)num);
	printf("The Decimal part = %.2f \n", num - (int)num);

	return (0);
}