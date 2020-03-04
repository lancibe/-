#include <stdio.h>

#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

int main()
{
	char chooice = 0;

    double work_hours = 0;
    double total_income = 0;
    double tax = 0;
    double net_income = 0;
    double hourly_wage = 0;

    while (1)
    {
        printf("%-20s%-20s\n%-20s%-20s\n%-20s\n", "a) $8.75/hr", "b) $9.33/hr", "c) $10.00/hr", "d) $11.20/hr", "q) quit");
        scanf_s("%c", &chooice);
        getchar();

        switch (chooice)
        {
        case 'a':
            hourly_wage = 8.75;
            break;

        case 'b':
            hourly_wage = 9.33;
            break;

        case 'c':
            hourly_wage = 10.00;
            break;

        case 'd':
            hourly_wage = 11.20;
            break;

        case 'q':
            return;

        default:
            printf("Please enter the choice between a to d and q\n");
            continue;
        }


        scanf_s("%lf", &work_hours);
        getchar();
        if (work_hours > 40)
        {
            work_hours = (work_hours - 40) * 1.5 + 40;
        }

        total_income = work_hours * hourly_wage;
        if (total_income <= 300)
        {
            tax = total_income * RATE1;
            net_income = total_income - tax;
        }
        else if (300 < total_income <= 450)
        {
            tax = 300 * RATE1 + (total_income - 300) * RATE2;
            net_income = total_income - tax;
        }
        else
        {
            tax = 300 * RATE1 + 150 * RATE2 + (total_income - 450) * RATE3;
            net_income = total_income - tax;
        }

        printf("total income = %.2lf, tax = %.2lf, net income = %.2lf\n", total_income, tax, net_income);
    }
	
	return 0;
}
