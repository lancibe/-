#include <stdio.h>
#include <ctype.h>

char getfirst(void)
{
    int ch = 0;

    while (!isalpha(ch = getchar()))
    {
        continue;
    }

    return ch;
}

int main()
{
	char ch = getfirst();

    putchar(ch);
    return 0;
 } 
