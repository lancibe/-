#include <stdio.h>
#include <string.h>

int main()
{
	char p[1000];
	fgets(p, 1000, stdin);
	int len = strlen(p);
	int i;
	for(i = len ; i >= 0 ; i--)
	{
		printf("%c",p[i]);
	}
	return 0;
}
