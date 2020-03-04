#include <stdio.h>

void print(char ch, int repeat_time, int repeat_row)
{
	int i,j;
    for(i = 0 ; i < repeat_row ; i++)
    {
        for(j = 0 ; j < repeat_time; j++)
        {
            putchar(ch);
        }
        putchar('\n');
    }


}

int main()
{
	int i = 0;
    int j = 0;
    char ch = 0;

    printf("Enter the character you want to print:");
    ch = getchar();
    getchar();

    printf("Enter the number of times to print:");
    scanf_s("%d", &i);
    getchar();

    printf("Enter the number of lines to print:");
    scanf_s("%d", &j);
    getchar();

    print(ch, i, j);
    return 0;
}
