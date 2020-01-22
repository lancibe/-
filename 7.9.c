#include <stdio.h>
#include <math.h>

int main()
{
	int input = 0;

    scanf("%d", &input);

    int i = 0;
    int j = 0;

    for (i = 2; i <= input; i++)
    {
        for (j = 2; j < sqrt((double)i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > sqrt(i))
        {
            printf("%d ", i);
        }
    }
	
	return 0;
}
