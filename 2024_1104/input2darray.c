#include <stdio.h>


int main()
{
	int mat[2][3];
	int i,j;

	for(i = 0; i < 2; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			printf("Enter value for mat[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(i = 0; i < 2; i++)
	{
		for(j = 0 ; j < 3; j++)
			printf("%3d", mat[i][j]);
		printf("\n");
	}

	return 0;
}