#include <stdio.h>

int main()
{
	
	int lenght;
	int good = 0;
	printf("Please enter the lenght of array: ");
	scanf("%d", &lenght);

	int myArray[lenght];

	for (int i = 0; i < lenght; i++)
	{
		printf("Please enter the value for array[%d]", i);
		scanf("%d", &myArray[i]);
	}
	for (int i = 0; i < lenght; i++)
	{
		if (i == 0 || i == lenght-1)
			continue;
		if(myArray[i-1] * myArray[i+1] == myArray[i])
			{
				good = 1;
				break;
			}
	
	}
	if (good == 1)
		printf("Good Neighbores!");
	else
		printf("Bad Neighbores!");
	return 0;
}