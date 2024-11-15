#include<stdio.h>

int main()
{
	// char firstName[] = "Brad";
	// char lastName[] = "Pitt";

	// printf("Your full name is: ");

	// for (int i = 0; i < 4; i++)
	// 	printf("%c", firstName[i]);
	// printf(" ");
	// for (int i = 0; i < 4; i++)
	// 	printf("%c", lastName[i]);
	// printf("\n");


	char fullName[] = "Brad Pitt";
	int i = 0;

	while(fullName[i] != '\0')
	{
		printf("%c", fullName[i]);
		i++;
	}
	
	return 0;
}