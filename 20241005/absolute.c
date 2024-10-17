#include <stdio.h>


int main ()
{
	int a;
	printf("Enter the integer: ");
	scanf("%d", &a);

	if (a < 0)
		printf("The absolute valude is %d\n", a*-1);
	else
		printf("The absolute valude is %d\n", a);
	return 0;
}