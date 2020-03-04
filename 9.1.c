#include <stdio.h>

double min(double x, double y)
{
    return (x < y ? x : y);
}

int main()
{
	double number1 = 0.0;
    double number2 = 0.0;

    printf("Enter the first number:");
    scanf("%lf", &number1);
    getchar();


    printf("Enter the second number:");
    scanf("%lf", &number2);
    getchar();

    printf("The min number of %lf and %lf is %lf", number1, number2, min(number1, number2));

	return 0;
}
