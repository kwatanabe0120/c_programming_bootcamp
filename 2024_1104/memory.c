#include <stdio.h>

int main(){
	int arr[5];
	
	printf("Element1 address = %lu\n", (unsigned long) &arr[0]);
	printf("Element2 address = %lu\n",  (unsigned long)&arr[1]);

	int mat[2][3] = {{1,3,5}, {2,4,6}};
	for (int i = 0; i < 2;i++)
		for (int j =0; j < 3; j++)
			printf("Address of mat[%d][%d]=%lu\n", i, j,  (unsigned long)&mat[i][j]);


	return 0;
}