#include<stdio.h>


void findMinMax(int num1, int num2, int *pMax, int *pMin)
{
	if (num1 > num2)
	{
		*pMax = num1;
		*pMin = num2;
	}
	else
	{
		*pMax = num2;
		*pMin = num1;
	}

}

int main(){
	int a = 5, b = 7;
	int max, min;

	findMinMax(a, b, &max, &min);

	printf("Max between %d,%d = %d\n", a, b, max);
	printf("Min between %d,%d = %d\n", a, b, min);

	return 0;
}

// int findMax(int num1, int num2)
// {
// 	if(num1>num2)
// 		return num1;
// 	else
// 		return num2;
// }

// int findMin(int num1, int num2)
// {
// 	if(num1>num2)
// 		return num2;
// 	else
// 		return num1;
// }

// int main()
// {
// 	int max, min;
// 	int a = 5, b=9;
// 	max = findMax(a,b);
// 	min = findMin(a,b);

// 	printf("Max between %d,%d = %d\n", a, b, max);
// 	printf("Min between %d,%d = %d\n", a, b, min);

	

// 	return 0;
// }