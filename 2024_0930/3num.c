#include <stdio.h>

int	main()
{
	// 5 3 1
	int a,b,c;
	int max, min;
	printf("enter num1: ");
	scanf("%d", &a);
	printf("enter num2: ");
	scanf("%d", &b);	
	printf("enter num3: ");
	scanf("%d", &c);

	max = min = a;

	if (b > max)
		max = b;
	if (b < min)
		min = b;
	
	if (c > max)
		max = c;
	if (c < min)
		min = c;

	printf("max is %d\n", max);
	printf("min is %d\n", min);

	return 0;
}