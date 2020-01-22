#include <stdio.h>

int main()
{
	char ch = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            break;

        case '!':
            putchar('!');
            putchar('!');
            break;

        default:
            putchar(ch);
            break;
        }
    }
	
	return 0;
}
