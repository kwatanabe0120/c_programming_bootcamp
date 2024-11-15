#include<stdio.h>

#define SIZE 4
#define N 5

int main ()
{
	int i, temp;
	int valuesArr[SIZE] = {1,2,3,4};
	

for (int k = 0; k < N; k++)
	{
		temp = valuesArr[0];
		for (i = 1; i < SIZE; i++)
		{
			valuesArr[i - 1] = valuesArr[i];
		}
		valuesArr[SIZE-1]= temp;
	}
	
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d", valuesArr[i]);
	}
	
	return 0;
}
