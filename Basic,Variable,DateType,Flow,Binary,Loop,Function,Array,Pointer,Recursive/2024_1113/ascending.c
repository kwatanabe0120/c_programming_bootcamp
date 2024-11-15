#include<stdio.h>


int isAscending(int num)
{
	int resultSoFar;
	
	if(num < 100)
	{
		if(num/10 > num%10) //21
			return -1;
		else //12
			return 1;
	}
	resultSoFar = isAscending(num/10);
	if(resultSoFar == 1) //124
	{
		if(num/10%10 < num%10)
			return 1;
		else
			return 0;

	}
	else // 9643 -1
	{
		if (num/10%10 > num%10)
			return -1;
		else
			return 0;
	}

}

int main()
{
	int num;
	printf("Enter num: ");
	scanf("%d", &num);

 int result = isAscending(num);
    if (result == 1)
        printf("Ascending!\n");
    else if (result == -1)
        printf("Descending!\n");
    else
        printf("Neither Ascending nor Descending!\n");

	return 0;
}