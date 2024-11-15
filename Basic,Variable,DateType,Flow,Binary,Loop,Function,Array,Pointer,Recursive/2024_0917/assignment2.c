#include <stdio.h>


int main ()
{
	double a = 11.5, b = 32.5;
	double temp;

	printf("Before\n");
	printf("a = %lf\n", a);
	printf("b = %lf\n", b);


	temp = a;
	a = b;
	b = temp;

	printf("After\n");
	printf("a = %lf\n", a);
	printf("b = %lf\n", b);


	return 0;
}