#include <stdio.h>

void enter_arr(double arr[][5], int rows)
{
	int i,j;
    for(i = 0 ; i < rows ; i++)
    {
        for(j = 0 ; j < 5 ; j++)
        {
            scanf_s("%lf", &arr[i][j]);
            getchar();
        }
    }
    return;
}
double cal_avg_1d(double arr[], int cols)
{
	int i;
    double sum = 0.0;
    for(i = 0; i < cols; i++)
    {
        sum += arr[i];
    }

    return (sum / cols);
}
double cal_avg_2d(double arr[][5], int rows)
{
	int i,j;
    double sum = 0.0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
    }
    return (sum / (5 * rows));
}
double arr_max_element(double arr[][5], int rows)
{
	int i,j;
    double max = 0.0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
void print_double_2d(double arr[][5], int rows)
{
	int i,j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
    return;
}

int main()
{
	
	return 0;
}
