#include <stdio.h>
#define LEN 80 
#include <ctype.h>
char * getword(char * str);

int main() {
	char input[LEN];
	while (getword(input) != NULL)         puts(input);
	puts("Done.\n");
	return 0;
}
char *getword(char* str) {
	int ch;
	char * orig = str;
	while ((ch = getchar()) != EOF && isspace(ch))         continue;
	if (ch == EOF)         
	return NULL;
	else         *str++ = ch;
	while ((ch = getchar()) != EOF && !isspace(ch))         *str++ = ch;
	*str = '\0';
	if (ch == EOF)         
	return NULL;
	else     {
		while (ch != '\n')             ch = getchar();
		return orig;
	}
}
