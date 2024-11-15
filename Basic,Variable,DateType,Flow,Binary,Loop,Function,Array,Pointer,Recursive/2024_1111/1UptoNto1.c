#include <stdio.h>



void printNtoOnetoN(int n)
{
	// 4 3 2 1 2 3 4
	if (n == 1)
		printf(" %d", n);
	else
	{
		printf(" %d", n);
		printNtoOnetoN(n-1);
		printf(" %d", n);
	}

}


// input 4
// 4 3 2 1 2 3 4
int main()
{
	int num;
	printf("Please enter the num: ");
	scanf("%d", &num);

	// printNtoOne(num);
	// printOnetoN(num);
	// printNtoOne(num);
	printNtoOnetoN(num);

	return 0;
}