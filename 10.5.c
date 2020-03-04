#include <stdio.h>

double diff_max_min(double arr[], int num)
{
    double max = arr[0];
    double min = arr[0];

	int i;
    for(i = 0 ; i < num ; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return (max - min);
}

int main()
{
	double arr[10] = { 1.23, 202.22, 39.03, 292.11, 3939.22, 30.2, 333.33, 938.2, 391.1, 2.2 };
    double result = 0.0;

    printf("The different of max and min is %.2lf\n", diff_max_min(arr, 10));

	
	return 0;
}
