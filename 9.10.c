#include <stdio.h>

void to_base_n(unsigned long n, int base)
{
    int r = 0;

    r = n % base;
    if (n >= base)
    {
        to_base_n(n / base, base);
    }
    putchar(('0' + r));

    return;
}

int main()
{
	unsigned long number = 0;
    int base = 0;

    printf("Enter the value that needs to be converted:");
    scanf("%ld", &number);
    getchar();

    printf("Enter the value of the base number:");
    scanf("%d", &base);
    getchar();

    printf("The result is: ");
    to_base_n(number, base);
    putchar('\n');
	return 0;
}
