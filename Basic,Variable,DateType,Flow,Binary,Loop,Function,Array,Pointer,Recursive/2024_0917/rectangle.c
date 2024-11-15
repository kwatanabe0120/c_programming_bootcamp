#include <stdio.h>


int main ()
{
	double height,width;
	double area;

	printf("Enter height:");
	scanf("%lf", &height);
	printf("Enter width:");
	scanf("%lf",&width);

	area = height*width;
	printf("the area is %lf", area);



	// scanf("%lf", &height);
	// scanf("%lf", &width);

	// printf("The Area is %.2lf\n", height*width);

	return 0;
}