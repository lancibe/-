#include <stdio.h>

double abc(double number1, double number2)
{
    double reciprocal1 = 1 / number1;
    double reciprocal2 = 1 / number2;
    double sum = reciprocal1 + reciprocal2;
    double sum_avg = sum / 2;
    return (1 / sum_avg);
}

int main()
{
	double number1 = 0.0;
    double number2 = 0.0;
    double result = 0.0;

    printf("Ener the first double number:");
    scanf_s("%lf", &number1);
    getchar();

    printf("Enter the second double number:");
    scanf_s("%lf", &number2);
    getchar();

    result = abc(number1, number2);

    printf("The harmonic average of %lf and %lf is %lf\n", number1, number2, result);

	
	return 0;
}
