#include <stdio.h>


void copy_arr(double target[], double source[], int num)
{
	int i;
    for(i = 0 ; i < num ; i++)
    {
        target[i] = source[i];
    }

    return;
}

int main()
{
	const double rain[5][12] =
    {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
        { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
        { 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
        { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
    };

    double rain_cp[5][12];

	int i,j;
    for(i = 0 ; i < 5 ; i++)
    {
        copy_arr(rain_cp[i], rain[i], 12);
    }

    printf("After copy:\n");
    for(i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ; j < 12; j++)
        {
            printf("%.2f ", rain_cp[i][j]);
        }
        printf("\n");
    }
	return 0;
}
