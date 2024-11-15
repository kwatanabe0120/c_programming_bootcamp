#include <stdio.h>

int isEven(int num)
{
	if (num % 2 == 0)
		return 1;
	return 0; 
}

// int isOdd(int num)
// {
// 	if (num % 2 == 0)
// 		return 0;
// 	return 1; 
// }

int isOdd2(int num)
{
	if (isEven(num) == 1)
		return 0;
	return 1;
}

int main ()
{

	return 0;
}