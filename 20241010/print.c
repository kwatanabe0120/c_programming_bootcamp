# include <stdio.h>

int main ()
{
	int num;
	printf("Give me number: ");
	scanf("%d", &num);

	while (num > 0)
	{
		printf("*\n");
		num--;
	}

	return 0;
}