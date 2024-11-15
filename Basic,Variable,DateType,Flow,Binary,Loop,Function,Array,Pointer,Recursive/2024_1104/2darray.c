#include <stdio.h>

int main(){
	int test[4][3] = {{1,2},{4,5,7},{10}};
	int test2[2][3] = {5,2,1,6,5};
	test2[1][2]= 100;

	for (int i = 0; i < 4; i ++)
	{
		for(int j = 0; j < 3; j++)
			printf("The int of postion[%d][%d]is %d\n", i+1,j+1,test[i][j]);
	}

	for (int k = 0; k < 2; k++)
	{
		for(int l = 0; l < 3; l++)
			printf("The int of postion[%d][%d]is %d\n", k+1,l+1,test2[k][l]);
	}

	return 0;
}