#include <stdio.h>

int main()
{
	char ch = 0;
    char ch_pre = 0;
    int n_appear = 0;

    while ((ch = getchar()) != '#')
    {
        if ('i' == ch)
        {
            if ('e' == ch_pre)
            {
                n_appear++;
            }
        }
        ch_pre = ch;
    }

    printf("ei has appeared %d times.\n", n_appear);
	
	return 0;
}
