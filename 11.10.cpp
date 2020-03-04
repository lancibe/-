#include <stdio.h>
#include <string.h>
#define LEN 81


int drop_space(char * s);
char * s_gets(char * st, int n);


int main() 
{
	char orig[LEN];
	puts("Enter a string of 80 characters or less:");
	while (s_gets(orig, LEN) && orig[0] != '\0')     {
		drop_space(orig);
		puts(orig);
		puts("Enter next string (or just Enter to quit):");
	}
	puts("Bye!");
	return 0;
}
int drop_space(char * s) {
	char * pos;
	while (*s) 
	{
		if (*s == ' ')         
		{
			pos = s;
			do             
			{
				*pos = *(pos + 1);
				pos++;
			} while (*pos);
		} 
		else
			s++;
	}
}
char * s_gets(char * st, int n) {
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)     {
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;

	}
	return ret_val;
}


