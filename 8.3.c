#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch = 0;
    int n_upper = 0;
    int n_lower = 0;

    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            n_lower++;
        }
        else if (isupper(ch))
        {
            n_upper++;
        }
    }

    printf("There are %d upper character and %d lower charecter.\n", n_upper, n_lower);
	
	return 0;
}
