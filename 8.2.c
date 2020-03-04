#include <stdio.h>

int main()
{
	char ch = 0;
    int n = 0;
    while ((ch = getchar()) != EOF)
    {
        n++;
        if (ch < ' ')
        {
            if ('\t' == ch)
            {
                putchar('\\');
                putchar('t');
                printf(":%d ", ch);
            }
            else if ('\n' == ch)
            {
                putchar('\\');
                putchar('n');
                printf(":%d ", ch);
            }
            else
            {
                putchar('^');
                putchar(ch+64);
                printf(":%d ", ch);
            }
        }
        else
        {
            putchar(ch);
            printf(":%d ", ch);
        }
        if (n % 10 == 0)
        {
            printf("\n");
        }

    }
	return 0;
}
