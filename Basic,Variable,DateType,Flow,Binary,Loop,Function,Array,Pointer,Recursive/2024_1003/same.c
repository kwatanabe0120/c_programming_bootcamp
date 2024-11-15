#include <stdio.h>

int main (){
	int a, b;

	printf("Give me the num1: ");
	scanf("%d", &a);
	printf("Give me the num2: ");
	scanf("%d", &b);

	if (a == b)
		printf("True");
	else
		printf("False");

	return 0;
}