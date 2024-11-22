#include<stdio.h>

int main()
{
	FILE* fp;
	char myChar1;

	fp = fopen("myfirst.txt", "r");
	// make a file in desktop
	// fp = fopen("/Users/kodai_watanabe/Desktop/myfile1.txt", "w");

	if (fp != NULL)
	{
		printf("Opened file succesfully\n");
		myChar1 = fgetc(fp);
		printf("The character read was %c\n", myChar1);
		myChar1 = fgetc(fp);
		printf("The character read was %c\n", myChar1);
		fclose(fp);

		// printf("Press any key: %c\n",fgetc(stdin));
		
	}
	else
	{
		printf("Opeing file failed");
	}


	return 0;
}