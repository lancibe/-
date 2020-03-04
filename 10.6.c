#include <stdio.h>

void revert_arr(double arr[], int num)
{
	int i;
    for(i = 0 ; i < num / 2 ; i++)
    {
        double temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }
}

int main()
{
	double arr[10] = { 1.23, 202.22, 39.03, 292.11, 3939.22, 30.2, 333.33, 938.2, 391.1, 2.2 };

    printf("Before revert, the array is:");
    int i;
	for(i = 0 ; i < 10 ; i++)
    {
        printf(" %.2lf", arr[i]);
    }
    printf("\n");

    revert_arr(arr, 10);

    printf(" After revert, the array is:");
    for (i = 0 ; i < 10 ; i++)
    {
        printf(" %.2lf", arr[i]);
    }
    printf("\n");
    
	return 0;
}
