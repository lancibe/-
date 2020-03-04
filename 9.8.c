#include <stdio.h>
#include <math.h>

double _power(double base, double index)
{
    if (index > 0)
    {
        return pow(base, index);
    }
    if (0 == index)
    {
        if (0 == base)
        {
            printf("The base number is 0 is not defined!\n");
        }

        return 1;
    }
    if (index < 0)
    {
        double tmp = pow(base, -index);
        return (1 / tmp);
    }
}

int main()
{
	double base = 0.0;
    double index = 0.0;
    double result = 0.0;

    printf("Enter the base number:");
    scanf("%lf", &base);
    getchar();

    printf("Enter the index number:");
    scanf("%lf", &index);
    getchar();

    result = _power(base, index);
    printf("base number: %lf, index number: %lf, the result: %lf\n", base, index, result);

	return 0;
}
