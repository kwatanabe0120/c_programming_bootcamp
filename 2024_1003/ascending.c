#include <stdio.h>


int main(){
	// 123
	int date;
	int hundrend, tens, remaining;
	printf("Enter a 3 digit interger: ");
	scanf("%d",&date);

	hundrend = date / 100;
	tens = (date - (hundrend * 100)) / 10;
	remaining = date % 10;


	if(hundrend < tens)
		if (tens < remaining)
		{
			printf("ASCENDING\n");
		}
		else
			printf("NOT ASCENDING\n");
	else
		printf("NOT ASCENDING\n");	
	return 0;

}