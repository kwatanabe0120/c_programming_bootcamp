#include <stdio.h>
#include<stdlib.h>

#define SIZE 4
#define N 2

int main()
{
	int myArray[SIZE] = {1, -2, 2, 3};
	int close = myArray[0] + myArray[1];
	int i, j;
	int check;

	for (i = 0; i < SIZE; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			
			check = myArray[i] + myArray[j]; 

			// if (check < 0)
			// {
			// 	check = check*-1;
			// }
			// if (abs(check) < abs(close))
			// 	close = check;

			// if (check < 0)
			// {
			// 	check = check*-1;
			// }
			if ((check < 0 ? check*-1 : check) < (close < 0? -close: close))
				close = check;
		}
	}
	printf("The sum of two elements close to 0 is %d\n", close);

	return 0;
}