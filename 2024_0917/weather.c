#include<stdio.h>

int main ()
{
	double	celsius1;
	printf("put temperture in celsius: ");
	scanf("%lf",&celsius1);

	double fahrenheit = celsius1*1.8+32;
	printf("The fahrenheit is %lf", fahrenheit);
	
	return 0;
}