#include <stdio.h>

int max_element_subscript(double arr[], int num)
{
    double temp = arr[0];
    int subscript = 0;
    int i;
    for(i = 0 ; i < num ; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
            subscript = i;
        }
    }

    return subscript;
}
int main()
{
	double arr[10] = { 1.23, 202.22, 39.03, 292.11, 3939.22, 30.2, 333.33, 938.2, 391.1, 2.2 };
    int result = 0;

    result = max_element_subscript(arr, 10);

    printf("The max element subscript of arr is %d\n", result);

	
	return 0;
}
