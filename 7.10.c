#include <stdio.h>

int main()
{
	int choice = 0;
    double income = 0;
    double threshold = 0;
    double tax = 0;

    while (1)
    {
        printf("1) Single\n2) Head of household\n3) Married,Shared\n4) Married,dieorced\nEnter you choice:");
        scanf_s("%d", &choice);
        switch (choice)
        {
        case 1:
            threshold = 17850.0;
            break;

        case 2:
            threshold = 23900.0;
            break;

        case 3:
            threshold = 29750.0;
            break;

        case 4:
            threshold = 14875.0;
            break;

        default:
            printf("invalid choice!");
            continue;
        }

        scanf("%lf", &income);
        if (income < threshold)
        {
            tax = income * 0.15;
        }
        else
        {
            tax = threshold * 0.15 + (income - threshold) * 0.28;
        }

        printf("category:%d, income:%.2lf, tax:%.2lf\n", choice, income, tax);
    }

	return 0;
}
