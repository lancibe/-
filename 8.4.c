#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch = 0;
    char ch_pre = 0;
    int n_word = 0;
    int total_chr = 0;
    int word_chr = 0;
    double word_chr_avg = 0;

    while (ch = getchar())
    {
        if (isalpha(ch))
        {
            break;
        }
    }

    while (ch != EOF)
    {
        if ((' ' == ch || '\n' == ch) && !isspace(ch_pre) && !ispunct(ch_pre)) 
        {
            n_word++;
            printf("ch_pre = %c\n", ch_pre);
            total_chr += word_chr;
            printf("word_chr = %d, total_chr = %d\n", word_chr, total_chr);
            word_chr = 0;
        }
        else if (isspace(ch))
        {
            ch_pre = ch;
            ch = getchar();
            continue;
        }
        if (!ispunct(ch) && !isspace(ch))
        {
            word_chr++;
        }
        ch_pre = ch;
        ch = getchar();
    }

    if (!isspace(ch_pre))
    {
        n_word++;
        printf("ch_pre = %c\n", ch_pre);
        total_chr += word_chr;
    }

    word_chr_avg = (double)total_chr / n_word;

    printf("Total words: %d, Total characters: %d, Characters per word: %.2lf", n_word, total_chr, word_chr_avg);
	return 0;
 } 
