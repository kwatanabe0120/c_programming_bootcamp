#include <stdio.h>

int main ()
{
	char date;
	printf("Enter the charactor: ");
	scanf("%c", &date);

	if ('a'<= date && date <='z')
		printf("Lowercase letter");
	else if ('A'<= date && date <='Z')
		printf("Uppercase letter");
	else if ('0'<= date && date <='9')
		printf("Digit");
	else 
		printf("Other");
	return 0;
}