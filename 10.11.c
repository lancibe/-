#include <stdio.h>
void arr_x2(int arr[][5], int rows)
{
	int i,j;
    for(i = 0 ; i < rows ; i++)
    {
        for(j = 0 ; j < 5 ; j++)
        {
            arr[i][j] = arr[i][j] * 2;
        }
    }

    return;
}
void print_int_arr_2d(int arr[][5], int rows)
{
	int i,j;
    for(i = 0 ; i < rows ; i++)
    {
        for(j = 0 ; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return;
}


int main()
{
	int source[3][5] =
    {
        { 12, 32, 31, 677, 325 },
        { 23, 568, 23, 32, 88 },
        { 235, 64, 645, 2, 23 }
    };

    printf("Original array:\n");
    print_int_arr_2d(source, 3);
    arr_x2(source, 3);
    printf("After x2 array:\n");
    print_int_arr_2d(source, 3);
	
	return 0;
}
