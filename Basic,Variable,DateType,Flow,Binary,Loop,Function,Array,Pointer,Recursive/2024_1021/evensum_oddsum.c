// // #include <stdio.h>

// // int main() {
// // 	// 7452
// //     int num;
// // 	int oddsum = 0, evensum = 0;
// // 	int thousant, hundreds, tens, remainding; 

// //     printf("Enter a number: ");
// //     scanf("%d", &num);

// // 	thousant = num / 1000;
// // 	hundreds = (num- thousant) / 100;
// // 	tens = (num - thousant - hundreds) / 10;
// // 	remainding = num % 10;

// // 	if(!(num > 999) || !(num < 10000))
// // 	{
// // 		printf("Please enter more than 0");
// // 	}
// // 	else
// // 	{
// // 		if (thousant % 2 == 0)
// // 			evensum = evensum + thousant;
// // 		else 
// // 			oddsum = oddsum + thousant;
// // 		if (hundreds % 2 == 0)
// // 			evensum = evensum + hundreds;
// // 		else 
// // 			oddsum = oddsum + hundreds;
// // 		if (tens % 2 == 0)
// // 			evensum = evensum + tens;
// // 		else 
// // 			oddsum = oddsum + tens;		
// // 		if (remainding % 2 == 0)
// // 			evensum = evensum + remainding;
// // 		else 
// // 			oddsum = oddsum + remainding;
		
// // 		printf("Evensum = %d\n", evensum);
// // 		printf("Oddsum = %d\n", oddsum);

// // 		printf("The difference is %d", evensum - oddsum);
// // 	}
	
// //     return 0;
// // }

// #include <stdio.h>

// int main() {
//     int num, thousand, hundreds, tens, remainding;
//     int evensum = 0, oddsum = 0;

//     // Assuming num is assigned a value somewhere before this code
//     // For example: num = 1234;
// 	printf("Enter a number: ");
//     scanf("%d", &num);

//     thousand = num / 1000;
//     hundreds = (num / 100) % 10;
//     tens = (num / 10) % 10;
//     remainding = num % 10;

//     if (num > 999 && num < 10000) {
//         if (thousand % 2 == 0)
//             evensum += thousand;
//         else 
//             oddsum += thousand;

//         if (hundreds % 2 == 0)
//             evensum += hundreds;
//         else 
//             oddsum += hundreds;

//         if (tens % 2 == 0)
//             evensum += tens;
//         else 
//             oddsum += tens;

//         if (remainding % 2 == 0)
//             evensum += remainding;
//         else 
//             oddsum += remainding;

//         printf("Evensum = %d\n", evensum);
//         printf("Oddsum = %d\n", oddsum);
//         printf("The difference is %d\n", evensum - oddsum);
//     } else {
//         printf("Please enter a 4-digit number.\n");
//     }

//     return 0;
// }


#include<stdio.h>


int main()
{
	int num, evensum = 0, oddsum = 0;
	int currentdigit = 0;

	printf("enter some number: ");
	scanf("%d", &num);
	// 1234

	while(num > 0)
	{
		currentdigit = num % 10;
		if (currentdigit % 2 == 0)
			evensum += currentdigit;
		else
			oddsum += currentdigit;
		num = num / 10;
	}

	    printf("Evensum = %d\n", evensum);
        printf("Oddsum = %d\n", oddsum);
        printf("The difference is %d\n", evensum - oddsum);
		

	return 0;
}