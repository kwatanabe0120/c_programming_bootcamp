#include <stdio.h>

int 	maxValue()
{
	int max;
	int a,b,c;
	
	printf("Please enter the value1: ");
	scanf("%d",&a);
	printf("Please enter the value2: ");
	scanf("%d",&b);
	printf("Please enter the value3: ");
	scanf("%d",&c);

	if (a > b && a > c)
		max = a;
	else if (b > a && b > c)
		max = b;
	else
		max = c;

	return max;	
}


int main()
{
	int result;
	result = maxValue();

	printf("The max value is %d", result);

	return 0;
}
