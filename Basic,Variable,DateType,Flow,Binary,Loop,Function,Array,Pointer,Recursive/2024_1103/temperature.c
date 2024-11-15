// #include <stdio.h>

// #define SIZE 7

// void	printAverageHottestColdest()
// {
// 	float temperature[SIZE];
// 	int i;
// 	float totalSum = 0;
// 	float hottest, colddest;

// 	for (i = 0; i < SIZE ; i++ )
// 	{
// 		printf("Please enter Temperature of day%d : ", i + 1);
// 		scanf("%f", &temperature[i]);
// 	}

// 	hottest = temperature[0];
// 	colddest = temperature[0];

// 	for (i = 0; i < SIZE ; i++ )
// 	{
// 		totalSum += temperature[i];

// 		if (hottest < temperature[i])
// 		{
// 			hottest = temperature[i];
// 			continue;
// 		}
		
// 		if (colddest > temperature[i])
// 			colddest = temperature[i];
// 	}

// 	printf("The avarage is %.2f\n", totalSum/SIZE);
// 	printf("The hottest tempature is %.2f\n",hottest);
// 	printf("The coldest tempature is %.2f\n",colddest);	

// }

// int main()
// {
// 	printAverageHottestColdest();
// 	return 0;
// }

#include <stdio.h>

#define SIZE 7

void	printAverageHottestColdest()
{
	float temperature[SIZE];
	int i;
	float totalSum = 0;
	float hottest, coldest;  // スペル修正

	for (i = 0; i < SIZE ; i++ )
	{
		printf("Please enter Temperature of day%d : ", i + 1);
		scanf("%f", &temperature[i]);
	}

	hottest = temperature[0];
	coldest = temperature[0];  // スペル修正

	for (i = 0; i < SIZE ; i++ )
	{
		totalSum += temperature[i];

		if (hottest < temperature[i])
		{
			hottest = temperature[i];
			continue;
		}
		
		if (coldest > temperature[i])  // スペル修正
			coldest = temperature[i];
	}

	printf("The average is %.f\n", totalSum/SIZE);  // スペル修正
	printf("The hottest temperature is %.2f\n", hottest);  // スペル修正
	printf("The coldest temperature is %.2f\n", coldest);  // スペル修正
}

int main()
{
	printAverageHottestColdest();
	return 0;
}