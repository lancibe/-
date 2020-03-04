#include <stdio.h>

int main()
{
	char ch = 0;
    int n = 0;
    while ((ch = getchar()) != EOF)
    {
        n++;
    }

    printf("There are %d characters in the file!\n", n);
	return 0;
}
