#include<stdio.h>


void printTotalNumberofNum1andNum2(int total, int num1, int num2)
{
	if(total == 0)
		return;

	printf("%d", num1);
	printTotalNumberofNum1andNum2(total-1, num1,num2);
	printf("%d", num2);

}



int main()
{
	printTotalNumberofNum1andNum2(3,2,4);

	return 0;
}