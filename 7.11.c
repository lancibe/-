#include <stdio.h>

int main()
{
	double n_artichoke = 0.0;
    double n_beet = 0.0;
    double n_carrot = 0.0;
    double freight = 0.0;
    double n_pound = 0.0;
    char choice = 0;
    double total_cost = 0.0;
    double discount = 0.0;
    double total_weight = 0.0;


    while ('q' != choice)
    {
        printf("%-20s%-20s\n%-20s%-20s\n", "a) Artichoke", "b) Beet", "c) Carrot", "q) Quit");
        choice = getchar();

        switch (choice)
        {
        case 'a':
            printf("How many pounds of Artichoke do you want to buy:");
            scanf_s("%lf", &n_pound);
            n_artichoke += n_pound;
            break;

        case 'b':
            printf("How many pounds of Beet do you want to buy:");
            scanf_s("%lf", &n_pound);
            n_beet += n_pound;
            break;

        case 'c':
            printf("How many pounds of Carrot do you want to buy:");
            scanf_s("%lf", &n_pound);
            n_carrot += n_pound;
            break;

        case 'q':
            continue;

        default:
            printf("Your choice is invalid! Please choose again.\n");
            break;
        }
        while (getchar() != '\n');
    }

    printf("%-20s%-20s%-20s%-20s\n", "Category", "Price", "Pounds", "Total price");
    printf("%-20s%-20s%-20.2lf%-20.2lf\n", "Artichoke", "$2.05/pound", n_artichoke, (n_artichoke * 2.05));
    printf("%-20s%-20s%-20.2lf%-20.2lf\n", "Beet", "$1.15/pound", n_beet, (n_beet * 1.15));
    printf("%-20s%-20s%-20.2lf%-20.2lf\n", "Carrot", "$1.09/pound", n_carrot, (n_carrot * 1.09));

    total_cost = n_artichoke * 2.05 + n_beet * 1.15 + n_carrot * 1.09;
    printf("Total_cost:%.2lf", total_cost);
    if (total_cost > 100)
    {
        discount = total_cost * 0.05;
        printf(" Discount:%,2lf", discount);
        total_cost -= discount;
    }

    total_weight = n_artichoke + n_beet + n_carrot;
    if (0 < total_weight && total_weight <= 5.0)
    {
        freight = 6.5;
    }
    else if (5.0 < total_weight && total_weight <= 20)
    {
        freight = 14.0;
    }
    else if (20 < total_weight )
    {
        freight = 14 + (total_weight - 20) * 0.5;
    }
    printf(" Total_freight:%.2lf", freight);

    printf(" Final cost:%.2lf", (total_cost  + freight));
	
	return 0;
}
