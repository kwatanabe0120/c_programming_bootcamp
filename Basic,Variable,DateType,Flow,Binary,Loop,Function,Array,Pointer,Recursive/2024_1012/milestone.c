#include<stdio.h>


// 0.01 cent double for 30days or 1 milion 
int main()
{
	float cent = 0.01;

	for (int i = 1; i <=30; i++)
	{
		printf("Day %d amount %.2f\n", i , cent);
		cent = cent * 2;
	}

	// printf("30days after %f", cent);

	return 0;
}