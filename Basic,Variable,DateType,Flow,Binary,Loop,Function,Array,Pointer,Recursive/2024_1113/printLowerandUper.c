#include <stdio.h>

void printLowerAndUpper(int total, char val)
{
	if (total <= 0)
		return;
	printf("%c", val);
	printLowerAndUpper(total -1, val);
	printf("%c", val - 'a' + 'A');
}


int main()
{
	printLowerAndUpper(5,'b');
	return 0;
}