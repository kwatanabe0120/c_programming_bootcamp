#include <stdio.h>


void printOnetoN(int n)
{
	if (n >= 1)
	{
		printOnetoN(n-1);
		printf("%d", n);
	}
}


int main()
{
	printOnetoN(5);
	return 0;
}