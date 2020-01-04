#include <stdio.h>

int main()
{
	int a;
	int i,j;
	char ch;
	scanf("%d",&a);
	for(i = 1 ; i <= a ; i++)
	{
		ch = 'F';
		for(j = 1 ; j <= i ; j++)
		{
			printf("%c",ch);
			ch--;
		}
		printf("\n");
	}
	return 0;
} 
