#include <stdio.h>
#include <math.h>


float	derivative(float c, float x, float n)
{
	float powerValue = pow(x, n-1);
	return (n * c * powerValue);
}


int main ()
{

	return 0;
}
