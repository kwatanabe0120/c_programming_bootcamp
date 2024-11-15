#include <stdio.h>

int main()
{
	float num1, num2;
	printf("Put num1: \n");
	scanf("%f", &num1);

	printf("Put num2: \n");
	scanf("%f", &num2);

	if(num1>num2)
		printf("The max is %f, the min is %f", num1,num2);
	if(num1 == num2)
		printf("Num1 and num2 is same");
	else
		printf("The max is %f, the min is %f", num2,num1);
	return 0;
}