#include<stdio.h>

int pellSequence(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return 2*pellSequence(n-1) + pellSequence(n-2);
}

int pellNoRecursive(int n)
{
	int prePrevious = 0, previous = 1;
	int current;
	int i;

	if(n == 0)
		return 0;
	if(n == 1)
		return 1;

	for (i = 2; i <= n; i++)
	{
		current = 2*previous + prePrevious;
		prePrevious = previous;
		previous = current;
	}
	return current;

}
int main()
{
	int index;

	printf("Please enter the index of pellSequence: ");
	scanf("%d", &index);

	// printf("%d of pellSequence is %d", index, pellSequence(index));
	printf("%d of pellSequence is %d", index, pellNoRecursive(index));

	return 0;
}