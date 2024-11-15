#include <stdio.h>


int main (){
	int num1,num2;

	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);

	if (num1 > num2)
		printf("The maximum num is %d", num1);
	if (num1 < num2)
		printf("The maximum num is %d", num2);
	else
		printf("Thoes are same num!\n");
	return 0;
}