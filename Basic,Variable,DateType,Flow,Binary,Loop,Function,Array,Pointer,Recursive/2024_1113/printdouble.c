#include <stdio.h>

void printchar(int total, char char1, char char2)
{
	if(total <= 0)
		return;
	printf("%c",char1);
	printchar(total-1, char1, char2);
	printf("%c%c",char2,char2);
	// printf("%c",char2);


}

int main()
{
	int total = 2;
	char a = 'b';
	char b = 'd';

	printchar(total, a,b);


	return 0;
}