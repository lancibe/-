#include <stdio.h>

int main()
{
	char ch = 0;

    while ((ch = getchar()) != '#')
    {
        if ('.' == ch)
        {
            putchar('!');
        }
        else if ('!' == ch)
        {
            putchar('!');
            putchar('!');
        }
        else
        {
            putchar(ch);
        }
    }
	
	return 0;
}
