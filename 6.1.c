#include <stdio.h>

int main()
{
	char letter[26];
	int i ;
	for(i = 0 ; i <= 25 ; i++)
	{
		letter[i] = i + 'a';	
	} 
	for(i = 0 ; i <= 25 ; i++)
	{
		printf("%c ",letter[i]);
	}
	return 0;
}
