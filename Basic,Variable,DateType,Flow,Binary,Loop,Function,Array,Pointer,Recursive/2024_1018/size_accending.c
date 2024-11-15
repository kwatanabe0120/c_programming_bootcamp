#include <stdio.h>

int main()
{
	int size;
	int num1, num2;
	int accending = 0;

	do
	{
		printf("Enter the size: ");
		scanf("%d", &size);
	} while (size <= 0);
	
	num1 = 0;

	do 
	{
		do
		{
			printf("Enter the number: ");
			scanf("%d", &num2);
		} while (num2 < 0);

		if (num1 > num2)
		{
			accending = 1;
			break;
		}
		num1 = num2;
		size--;
	}
	while (size > 0);

	if (accending == 0)
		printf("Accending");
	else
		printf("Not accending");

	return 0;
}