#include <stdio.h>

int main()
{
	
	int odd = 0;
    int even = 0;
    int sum_odd = 0;
    int sum_even = 0;
    int input = 0;

    while (scanf("%d", &input))
    {
        if (0 == input)
        {
            break;
        }
        else if (0 == (input % 2))
        {
            even++;
            sum_even += input;
        }
        else
        {
            odd++;
            sum_odd += input;
        }
    }

    printf("the average value of %d even is: %f; the average value of %d odd is: %f\n", even, (float)(sum_even/even), odd, (float)(sum_odd/odd));

	return 0;
}
