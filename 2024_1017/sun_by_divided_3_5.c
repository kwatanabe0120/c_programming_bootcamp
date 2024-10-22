#include<stdio.h>

int main ()
{
	int num,sum = 0;
	printf("Enter the num: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 3 == 0 && i %5 ==0)
			sum = sum + i;
	}
	printf("The total is %d\n", sum);

	return 0;
}