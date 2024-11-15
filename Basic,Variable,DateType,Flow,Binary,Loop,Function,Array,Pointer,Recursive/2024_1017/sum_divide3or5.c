#include <stdio.h>

int main () 
{
	int num, total = 0;
	printf("Enter the num: ");
	scanf("%d", &num);


	// for (int i = 1; i <= num ; i++)
	// {
	// 	if (i % 3 == 0 || i % 5 ==0)
	// 	{
	// 		printf("The i is %d\n", i);
	// 		total = total + i;
	// 	}
	// }

	for (int i = 3; i <= num ; i +=3)
	{
		total = total + i;
	}
	for (int i = 5; i <= num ; i +=5)
	{
		if (i % 3 !=0)
			total = total + i;
	}
	// for (int i = 15; i <= num ; i +=15)
	// {
	// 	total = total - i;
	// }

	printf("The sum is %d", total);


	return 0;
}