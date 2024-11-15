#include <stdio.h>

int main()
{
	char operator;
	int num1, num2;
	printf("Enter oprator: ");
	scanf("%c", &operator);
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);

	switch (operator)
	{
	case '+':
		printf("The result is %d", num1 + num2);
		break;
	case '-':
		printf("The result is %d", num1 - num2);
		break;	
	case '*':
		printf("The result is %d", num1 * num2);
		break;	
	case '/':
		printf("The result is %d", num1 / num2);
		break;	
	case '%':
		printf("The result is %d\n", num1 % num2);
		break;
	default:
		printf("please make sure you enter +, -, *, /, %%\n");
		break;
	}


	return 0;
}