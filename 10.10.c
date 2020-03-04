#include <stdio.h>
void arr_add(int target[], int source1[], int source2[], int length)
{
	int i;
    for(i = 0; i < length; i++)
    {
        target[i] = source1[i] + source2[i];
    }

    return;
}

int main()
{
	int source1[4] = { 2, 4, 5, 8 };
    int source2[4] = { 1, 0, 4, 6 };
    int target[4];

	int i,j;
    arr_add(target, source1, source2, 4);

    for(i = 0; i < 4; i++)
    {
        printf("%d ", source1[i]);
    }
    printf("\n");

    for(i = 0; i < 4; i++)
    {
        printf("%d ", source2[i]);
    }
    printf("\n");

    for(i = 0; i < 4; i++)
    {
        printf("%d ", target[i]);
    }
    printf("\n");
	return 0;
}
