#include<stdio.h>

int main ()
{
	// int num, count = 1;
	int num, i = 2;

	printf("Enter the num: ");
	scanf("%d", &num);

	/*
	for (int i = 2;count <= num; i = i +2)
	{
		printf("%d", i);
		if (count != num)
			printf(",");
		count++;
	}
	*/

	while (num > 0)
	{
		printf("%d ", i);
		i +=2;
		num--;
	}

	return 0;
}