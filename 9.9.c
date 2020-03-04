#include <stdio.h>
#include <math.h>

double _power(double base, double index)
{
    if (index > 0)
    {
        index--;
        return (base * _power(base, index));
    }
    if (0 == index)
    {
        if (base == 0)
        {
            printf("The base number is 0 is not defined!\n");
        }
        return 1;
    }
    if (index < 0)
    {
        index++;
        double tmp = 1 / base;
        return (tmp * _power(base, index));
    }
}

int main()
{
	double base = 0.0;
    double index = 0.0;
    double result = 0.0;

    scanf("%lf", &base);
    getchar();

    scanf("%lf", &index);
    getchar();

    result = _power(base, index);
    printf("base number: %lf, index number: %lf, the result: %lf\n", base, index, result);

	
	return 0;
}
