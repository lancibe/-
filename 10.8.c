#include <stdio.h>

void copy_ptrs(double *target, double *source_begin, double *source_end)
{
	double *i;
    for(i = source_begin; i < source_end; i++)
    {
        *target++ = *i;
    }
    return;
}

int main()
{
	double arr[10] = { 1.23, 202.22, 39.03, 292.11, 3939.22, 30.2, 333.33, 938.2, 391.1, 2.2 };
    double target[3];

    copy_ptrs(target, arr+2, arr+5);

	int i;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("%.2lf ", target[i]);
    }
	return 0;
}
