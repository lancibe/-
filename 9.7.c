#include <stdio.h>
int judge_alpha(char ch)
{
    if (isalpha(ch))
    {
        return ch - 'a' + 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
	char ch = 0;
    int result = 0;

    while (scanf("%c",&ch) != EOF)
    {
        if ('\n' == ch)
        {
            continue;
        }
        int jud = judge_alpha(ch);
        if (-1 == jud)
        {
            printf("%c is not a alpha.\n", ch);
        }
        else
        {
            printf("%c:%d\n", ch, jud);
        }
        printf("Enter the next character:(# to quit):");
    }
	return 0;
}
