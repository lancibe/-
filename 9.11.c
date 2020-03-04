#include <stdio.h>
void Fibonacci(unsigned n)
{
    int fib1 = 1;
    int fib2 = 1;

    printf("%d, %d", fib1, fib2);

	int i;
    for(i = 0 ; (i = (fib1 + fib2)) < n;  )
    {
        printf(", %d", i);
        fib1 = fib2;
        fib2 = i;
    }

    putchar('\n');
    return;
}

int main()
{
	long long int num;
    scanf("%lld", &num);

    Fibonacci(num);
	return 0;
}
