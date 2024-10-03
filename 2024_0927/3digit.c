#include <stdio.h>

int main()
{
	// 365
	int date;
	printf("3 digit num: ");
	scanf("%d",&date);

	printf("First num: %d\nSecond num: %d\nThird num: %d\n", date/ 100, (date - date/100*100) /10, (date - date/100*100) %10);
	printf("The sum of digit %d",date/ 100 + (date - date/100*100) /10 + (date - date/100*100) %10 );

	return 0;
}