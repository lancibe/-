#include <stdio.h>

int main()
{
	char a;
	a = getchar();
	int i,j,k;
	for(i = 'A' ; i <= a ; i++)
	{
		for(j = 'A' ; j <= i ; j++)
		{
			printf("%c",j);
		}
		for(k = i-1 ; k >= 'A' ; k--)
		{
			printf("%c",k);	
		} 
		printf(" ");
	}
	
	return 0;
}
