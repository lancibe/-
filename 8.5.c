#include <stdio.h>

int main()
{
	char ch = 0;
    int upper = 100;
    int lower = 0;
    int guest = 50;

    printf("I guest the number is 50. Is it right(Y/N)?");
    scanf("%c", &ch);
    getchar();

    while ('Y' != ch)
    {
        printf("The number is bigger or smaller than I guest?(B/S)");
        scanf("%c", &ch);
        getchar();
        if ('B' == ch)
        {
            lower = guest;
            guest = (lower + upper) / 2;
        }
        else
        {
            upper = guest;
            guest = (lower + upper) / 2;
        }

        printf("number is %d, Is it right(Y/N)?", guest);
        scanf("%c", &ch);
        getchar();
    }

    printf("win");
	
	return 0;
 } 
