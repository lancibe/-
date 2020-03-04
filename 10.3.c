#include <stdio.h>

int max_element(int arr[], int num)
{
    int tmp = arr[0];
    int i;
    for(i = 0 ; i < num ; i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
        }
    }

    return tmp;
}

int main()
{
    int arr[10] = { 10, 23, 55, 2, 12, 5, 23, 333, 5, 100 };
    int result = max_element(arr, 10);

    printf("The max element of array is %d.\n", result);

	
	return 0;
}
