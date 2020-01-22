#include <stdio.h>

#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

int main()
{
	double work_hours = 0;
    double total_income = 0;
    double tax = 0;
    double net_income = 0;

    scanf_s("%lf", &work_hours);
    if (work_hours > 40)
    {
        work_hours = (work_hours - 40) * 1.5 + 40;
    }

    total_income = work_hours * 1000;
    if (total_income <= 300)
    {
        tax = total_income * RATE1;
        net_income = total_income - tax;
    }
    else if (total_income <= 450)
    {
        tax = 300 * RATE1 + (total_income - 300) * RATE2;
        net_income = total_income - tax;
    }
    else
    {
        tax = 300 * RATE1 + 150 * RATE2 + (total_income - 450) * RATE3;
        net_income = total_income - tax;
    }

    printf("total income = %lf, tax = %lf, net income = %lf\n", total_income, tax, net_income);
	
	
	return 0;
}
