#include <stdio.h>

void chline(char *ch, int i, int j)
{
    int m = 0;
    int n = 0;
    int tmp = 0;
    while ((*(ch + tmp)) != '\0')
    {

        if (m == i - 1)
        {
            break;
        }
        if ('\n' == (*(ch + tmp)))
        {
            m++;
        }
        tmp++;
    }

    for (n = 0; n < j; n++)
    {
        if (n == j - 1)
        {
            putchar(ch[tmp]);
        }
        tmp++;
    }
}

int main()
{
	int i = 0;
    int j = 0;
    char ch = 0;
    char *words = "Hello world!\nThis is the bulteaful world!\nLearn to program in c language!\nc language is a nice language!";

    printf("Please enter the row:");
    scanf("%d", &i);
    getchar();

    printf("Please enter the column:");
    scanf("%d", &j);
    getchar();

    printf("The character of %d row %d column is ", i, j);
    chline(words, i, j);

    printf("\n");
	return 0;
}
