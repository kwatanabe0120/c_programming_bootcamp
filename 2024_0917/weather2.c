#include<stdio.h>

int main ()
{
	double	fahrenheit;
	printf("put temperture in fahrenheit: ");
	scanf("%lf",&fahrenheit);

	double celsius = (fahrenheit-32)/1.8;
	printf("The celsius is %lf", celsius);
	
	return 0;
}