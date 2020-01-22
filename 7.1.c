#include <stdio.h>

int main()
{
	char ch = 0;
    int space = 0;
    int _break = 0;
    int other = 0;

    printf("Please enter text to be analyzed(# to terminate):");
    while ((ch = getchar()) != '#')
    {
        if (' ' == ch)
        {
            space++;
        }
        else if ('\n' == ch)
        {
            _break++;
        }
        else
        {
            other++;
        }
    }


    printf("break = %d, space = %d, other = %d\n", _break, space, other);
    return 0;
}
