#include <stdio.h>

void larger_of(double *x, double *y)
{
    if (*x > *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}

int main()
{
	double number1 = 0.0;
    double number2 = 0.0;

    printf("Enter the first double number:");
    scanf("%lf", &number1);
    getchar();

    printf("Enter the second double number:");
    scanf("%lf", &number2);
    getchar();

    printf("Before larger_of, the two numbers are %lf and %lf\n", number1, number2);
    larger_of(&number1, &number2);
    printf("After larger_of, the two number are %lf and %lf\n", number1, number2);

	return 0;
}
