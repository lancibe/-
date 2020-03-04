#include <stdio.h>

void fun(double *number1, double *number2, double *number3)
{
    double tmp = 0.0;
    if (*number1 > *number2)
    {
        tmp = *number1;
        *number1 = *number2;
        *number2 = tmp;
    }
    if (*number1 > *number3)
    {
        tmp = *number1;
        *number1 = *number3;
        *number3 = tmp;
    }
    if (*number2 > *number3)
    {
        tmp = *number2;
        *number2 = *number3;
        *number3 = tmp;
    }
    return;
}

int main()
{
	double number1 = 0.0;
    double number2 = 0.0;
    double number3 = 0.0;

    printf("Enter the first double number:");
    scanf("%lf", &number1);
    getchar();

    printf("Enter the second double number:");
    scanf("%lf", &number2);
    getchar();

    printf("Enter the third double number:");
    scanf("%lf", &number3);
    getchar();

    printf("Before rank, the three double number are: %lf, %lf and %lf\n", number1, number2, number3);
    fun(&number1, &number2, &number3);
    printf("After rank, the three double number are: %lf, %lf and %lf\n", number1, number2, number3);

	
	return 0;
}
