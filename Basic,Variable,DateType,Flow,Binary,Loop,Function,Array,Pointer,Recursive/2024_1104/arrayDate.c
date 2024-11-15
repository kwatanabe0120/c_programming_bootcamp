#include<stdio.h>

int main()
{
	int date[3] = {1,2,2000};
	int copyDate[3];


	for (int i = 0; i < 3; i++)
		printf(" %d", date[i]);
	
	printf("\n");
	for(int i = 0; i < 3; i++)
	{
		copyDate[i] = date[i];
		printf(" %d", copyDate[i]);

	}




	return 0;
}