#include <stdio.h>

typedef  struct ratinalNumber
{
	int numerator;
	int denominator;
} Rational;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Rational reduce(Rational r) {
    int divisor = gcd(r.numerator, r.denominator);
    r.numerator /= divisor;
    r.denominator /= divisor;
    return r;
}

// increment
void increment(Rational* number)
{
	(*number).numerator += (*number).denominator;
}
// decrement
void decrement(Rational* n1)
{
	(*n1).numerator -= (*n1).denominator;
}

// addition
Rational addition(Rational n1, Rational n2)
{
	Rational result;
	result.denominator = n1.denominator * n2.denominator;
	result.numerator = n1.numerator * n2.denominator + n2.numerator * n1.denominator; 
	return reduce(result);
}

// subtraction
Rational subtraction(Rational n1, Rational n2)
{
	Rational result;
	result.denominator = n1.denominator * n2.denominator;
	result.numerator = n1.numerator * n2.denominator - n2.numerator * n1.denominator;

	return reduce(result);
}

// multiplication
Rational multiplication(Rational n1, Rational n2)
{
	Rational result;

	result.numerator = n1.numerator * n2.numerator;
	result.denominator = n1.denominator * n2.denominator;
	return reduce(result);
}

// division
Rational divition(Rational n1, Rational n2)
{
	Rational result;

	result.numerator = n1.numerator*n2.denominator;
	result.denominator = n1.denominator*n2.numerator;
	return reduce(result);
}

// smaller
int isSmaller(Rational n1, Rational n2)
{
	int tem1, tem2;
	if (n1.denominator != n2.denominator)
	{
		tem1 = n1.denominator;
		tem2 = n2.denominator;
		n1.numerator *= tem2;
		n1.denominator *= tem2;
		n2.numerator *= tem1;
		n2.denominator *= tem1;
	}
	// n1 is smaller than n2
	if (n1.numerator < n2.numerator)
		return 1;
	else
		return 0;
}

// bigger
int isBigger(Rational n1, Rational n2)
{
	int tem1, tem2;
	if (n1.denominator != n2.denominator)
	{
		tem1 = n1.denominator;
		tem2 = n2.denominator;
		n1.numerator *= tem2;
		n1.denominator *= tem2;
		n2.numerator *= tem1;
		n2.denominator *= tem1;
	}
	// n1 is bigger than n2
	if (n1.numerator > n2.numerator)
		return 1;
	else
		return 0;
}

// equal
int isEqual(Rational n1, Rational n2)
{
	int tem1, tem2;
	if (n1.denominator != n2.denominator)
	{
		tem1 = n1.denominator;
		tem2 = n2.denominator;
		n1.numerator *= tem2;
		n1.denominator *= tem2;
		n2.numerator *= tem1;
		n2.denominator *= tem1;
	}
	// n1 is equal to n2
	if (n1.numerator ==  n2.numerator)
		return 1;
	else
		return 0;
}

// notequall
int isNotEqual(Rational n1, Rational n2)
{
	int tem1, tem2;
	if (n1.denominator != n2.denominator)
	{
		tem1 = n1.denominator;
		tem2 = n2.denominator;
		n1.numerator *= tem2;
		n1.denominator *= tem2;
		n2.numerator *= tem1;
		n2.denominator *= tem1;
	}
	// n1 is not equal to n2
	if (n1.numerator !=  n2.numerator)
		return 1;
	else
		return 0;
}



int main()
{
	Rational n1 = {.numerator = 1, .denominator = 3};
	Rational n2 = {.numerator = 4, .denominator = 6};
	Rational result;

	printf("\nAddition Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	result = addition(n1,n2);
	printf("The result is %d/%d\n",result.numerator, result.denominator);

	printf("\nSubstraction Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	result = subtraction(n1,n2);
	printf("The result is %d/%d\n",result.numerator, result.denominator);

	printf("\nMultiplication Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	result = multiplication(n1,n2);
	printf("The result is %d/%d\n",result.numerator, result.denominator);

	printf("\nDividion Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	result = divition(n1,n2);
	printf("The result is %d/%d\n",result.numerator, result.denominator);

	printf("\nSmaller Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	if (isSmaller(n1,n2) == 1)
		printf("n1 is smaller than n2\n");
	else
		printf("n1 is not smaller than n2\n");

	printf("\nBigger Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	if (isBigger(n1,n2) == 1)
		printf("n1 is bigger than n2\n");
	else
		printf("n1 is not bigger than n2\n");

	printf("\nEqual Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	if (isEqual(n1,n2) == 1)
		printf("n1 is equal to n2\n");
	else
		printf("n1 is not equal to n2\n");
	
	printf("\nNot Equal Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	printf("n2 = %d/%d\n", n2.numerator, n2.denominator);
	if (isNotEqual(n1,n2) == 1)
		printf("n1 is not equal to n2\n");
	else
		printf("n1 is equal to n2\n");

	printf("\nIncrement Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	increment(&n1);
	reduce(n1);
	printf("The result is %d/%d\n",n1.numerator, n1.denominator);

	printf("\nDecrement Test\n");
	printf("n1 = %d/%d\n", n1.numerator, n1.denominator);
	decrement(&n1);
	reduce(n1);
	printf("The result is %d/%d\n",n1.numerator, n1.denominator);

	return 0;
}