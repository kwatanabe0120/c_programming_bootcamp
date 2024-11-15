#include <stdio.h>


float averageValue(int a , int b, int c)
{
	return (a+b+c)/3;	
}


int main (){

	int a,b,c;
	float result;
	
	printf("Please enter the value1: ");
	scanf("%d",&a);
	printf("Please enter the value2: ");
	scanf("%d",&b);
	printf("Please enter the value3: ");
	scanf("%d",&c);
	result =  averageValue(a,b,c);
	printf("The average value is %f", result);
	return 0;
}