#include<stdio.h>

#define SIZE 4

int main(){

	int i;
	int flag = 1;
	int arr[SIZE] = {1,2,2,1};

	// 1,2,3,2,1
	// 1,2,3,3,2,1

	for (i = 0; i < SIZE / 2; i++)
	{
		if(arr[i] != arr[SIZE-1-i])
		{
			flag = 0;
			break;
		}
	}
	if (flag ==1)
		printf("Palindrome!");
	else
		printf("Not Palindrome!");


	return 0;
}