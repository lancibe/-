#include <stdio.h>
#include <string.h>
#define LEN 80
int is_within(const char * str, char ch);

char * s_gets(char * st, int n);
int main() {
	char input[LEN];
	char ch;
	int found;;
	printf("Enter a string: ");
	while (s_gets(input, LEN) && input[0] != '\0')     {
		printf("Enter a character: ");
		ch = getchar();
		while (getchar() != '\n')             continue;
		found = is_within(input, ch);
		if (found == 0)             printf("%c not found in string.\n", ch);
		else             printf("%c found in string %s\n", ch, input);
		printf("Next string: ");
	}
	puts("Done.\n");
	return 0;
}
int is_within(const char * str, char ch) {
	while (*str != ch && *str != '\0')         str++;
	return *str;
}
char * s_gets(char * st, int n) {
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)     {
		find = strchr(st, '\n');
		if (find) *find = '\0';
		else             
		while (getchar() != '\n')                 continue;
	}
	return ret_val;
}



