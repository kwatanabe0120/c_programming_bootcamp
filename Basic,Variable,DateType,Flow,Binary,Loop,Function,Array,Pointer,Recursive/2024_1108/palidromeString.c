#include<stdio.h>
#include<string.h>


int main()
{
	int length;
	int i, j;
	int isPalindrome = 1;
	puts("Please enter the length of array: ");
	scanf("%d", &length);

	char array[length+1];
	char copy[length+1];

// input
	for (i =0; i < length; i++)
	{
		printf("Value for #%d: ",i);
		scanf(" %c", &array[i]);
	}

// reverse and copy
	for (i = 0; i < length; i++)
	{
		copy[i]= array[length-i-1];
	}

// check
	for (i = 0; i < length; i++)
	{
		if (copy[i] != array[i])
		{
			isPalindrome = 0;
			break;
		}
		
	}

// print
	if (isPalindrome == 0)
		printf("Not palidrome");
	else
		printf("Palidrome!");

	return 0;
}