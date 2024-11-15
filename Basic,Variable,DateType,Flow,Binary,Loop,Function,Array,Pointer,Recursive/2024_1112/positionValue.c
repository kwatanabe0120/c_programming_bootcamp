#include <stdio.h>
// Ex1 36435
// postion 0:5
// postion 1:3
// postion 2:4
// postion 3:6
// postion 4:3
// return 0

// Ex2 438
// postion 0:8
// postion 1:3
// postion 2:4
// return 1

// Ex2 6438
// postion 0:8
// postion 1:3
// postion 2:4
// postion 3:6
// return 0


// 34
// postion 0: 4
// postion 1: 3
// return 1



int evenPositionEvenNumberOddPostionOddNumber(int n)
{
	if(n < 10)
	{
		if(n % 2 ==0)
			return 1;
		else 
			return 0;
	}
	if(n < 100)
	{
		if(n/10 % 2 == 1 && n%10%2==0)
			return 1;
		else
			return 0;
	}
	if(n%10%2==0 && n/10%10%2 ==1)
		return evenPositionEvenNumberOddPostionOddNumber(n/100);
	else
		return 0;
}

int main()
{
	int num;
	printf("Please enter num: ");
	scanf("%d", &num);

	printf("The result is %d\n", evenPositionEvenNumberOddPostionOddNumber(num));

	return 0;
}