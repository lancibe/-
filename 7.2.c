#include <stdio.h>

int main()
{
    char ch = 0;
    int i = 0;

    printf("Please enter text to be analyzed:(# to terminate):");
    while ((ch = getchar()) != '#')
    {
        if ((i % 8 == 0) && (i != 0))
        {
            putchar('\n');
        }
        i++;
        printf("%c:%d ", ch, ch);
    }	
	return 0;
}
