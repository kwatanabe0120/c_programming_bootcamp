#include <stdio.h>


int myStrlen(char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;
	return i;
}

int main()
{
	char test[]="Hello";

	printf("The length of '%s' is %d", test, myStrlen(test));



	return 0;
}