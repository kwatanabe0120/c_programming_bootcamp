#include <stdio.h>

int main ()
{
	int a;
	printf("Put the number: ");
	scanf("%d", &a);

	if (a < 10)
		printf("Neither double/triple");
	else if (a < 100)
		printf("Double-digit");
	else if (a < 1000)
		printf("Triple-digit");
	else
		printf("Neither double/triple");

	return 0;
}