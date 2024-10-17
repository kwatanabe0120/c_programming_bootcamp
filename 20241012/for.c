#include <stdio.h>

int main ()
{
	int num, pow;
	int result = 1, i;
	// 3
	printf("Enter your num: ");
	scanf("%d", &num);
	// 2
	printf("Enter your pow: ");
	scanf("%d", &pow);

	for (i = 1; i <= pow; i++)
	{
		result = result * num;
	}
	printf("The %d of power %d is %d\n",num, pow, result);

	return 0;
}