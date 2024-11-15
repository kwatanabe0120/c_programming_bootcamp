#include<stdio.h>

int lucasRecursive(int n)
{
	if (n == 0)
		return 2;
	if (n == 1)
		return 1;
	return lucasRecursive(n-1)+lucasRecursive(n-2);
}
int lucasNoRecursive(int n)
{
	// int previous1 = 0, previous2 = 0, i= 0, sum = 0;

	// for(i = 0; i <= n; i++)
	// {
	// 	if (n == 0)
	// 		sum +=2;
	// 	if (n == 1)
	// 		sum +=1;
		
	// 	sum = 
	// }

	int lucas[100] = {2,1};
	int i = 0;

	if (n == 0) return 2;
    if (n == 1) return 1;

	for (i = 2; i < n; i++)
	{
		lucas[i] = lucas[i-1]+lucas[i-2];
	}

	return lucas[n-1];

}

int main()
{
	int num;
	printf("Please enter the index of Rucas sequence: ");
	scanf("%d", &num);

	// printf("The index %d of LucasSequeence is %d\n", num, lucasRecursive(num));
	printf("The index %d of LucasSequeence is %d\n", num, lucasNoRecursive(num));

	return 0;
}