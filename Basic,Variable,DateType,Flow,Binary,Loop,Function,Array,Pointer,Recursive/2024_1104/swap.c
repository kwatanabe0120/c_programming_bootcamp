#include <stdio.h>

void swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(){
	int *p;
	int a =1, b =2;
	p = &a;
	printf("First number before swap = %d\n", a);
	printf("Second number before swap = %d\n", b);
	printf("Test %ld\n",(long int)&a);
	printf("Test %ld\n",(long int)p);
	printf("Test %d\n",a);
	printf("Test %d\n",*p);
	
	printf("\n");
	swap(a,b);
	printf("First number after swap = %d\n", a);
	printf("Second number after swap = %d\n", b);

	return 0;
}