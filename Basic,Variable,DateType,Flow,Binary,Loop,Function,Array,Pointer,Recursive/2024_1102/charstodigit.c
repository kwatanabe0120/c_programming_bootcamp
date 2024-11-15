#include <stdio.h>

int chartoDigit(char a, char b, char c)
{
	if ((a >='0' && a <= '9')&&(b >='0' && b <= '9')&&(c >='0' && c <= '9'))
		return ((a - '0') * 100 + (b - '0') * 10 + (c - '0'));
	else
		return 0;

}



int main(){
	char num1, num2, num3;
	int result;
	printf("Please Enter num1:");
	scanf(" %c", &num1);
	printf("Please Enter num2:");
	scanf(" %c", &num2);
	printf("Please Enter num3:");
	scanf(" %c", &num3);

	result = chartoDigit(num1,num2,num3);
	
	if (result != 0)
		printf("The result is %d", result);
	else
		printf("Error! please make sure you put 3 integer!");

	return 0;
}