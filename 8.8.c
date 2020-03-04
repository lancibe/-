#include <stdio.h>

#define ABC 0.000001

int main()
{
	float number1 = 0.0;
    float number2 = 0.0;
    char choice = 0;

    do
    {
        printf("%-20s%-20s\n%-20s%-20s\n%-20s\n", "a. add", "s. subtract", "m. multuply", "d. divide", "q. quit");
        if (!(scanf("%c", &choice) == 1 && (('a' == choice) || ('s' == choice) || ('m' == choice) || ('d' == choice) || ('q' == choice))))
        {
            printf("Please enter the correct operation, please enter again!\n");
            while (getchar() != '\n')
            {
                continue;
            }
            continue;
        }
        getchar();

        if ('q' == choice)
        {
            printf("Bye!\n");
            return;
        }

        printf("Enter first number:");
        while (scanf_s("%f", &number1) != 1)
        {
            char ch = 0;
            while ((ch = getchar()) != '\n')
            {
                putchar(ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        getchar();

        printf("Enter second number:");
        while (scanf_s("%f", &number2) != 1)
        {
            char ch = 0;
            while ((ch = getchar()) != '\n')
            {
                putchar(ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        getchar();

        switch (choice)
        {
        case 'a':
            printf("%f + %f = %f\n", number1, number2, (number1 + number2));
            break;

        case 's':
            printf("%f - %f = %f\n", number1, number2, (number1 - number2));
            break;

        case 'm':
            printf("%f * %f = %f\n", number1, number2, (number1 * number2));
            break;

        case 'd':
            while (number2 > -ABC && number2 < ABC)
            {
                printf("Enter a number other than 0:");
                while (scanf_s("%f", &number2) != 1)
                {
                    char ch = 0;
                    while ((ch = getchar()) != '\n')
                    {
                        putchar(ch);
                    }
                    printf(" is not an number.\n");
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }
                getchar();
            }
            printf("%f / %f = %f\n", number1, number2, (number1 / number2));
            break;

        default:
            break;
        }
    } while (1);
	
	return 0;
}
