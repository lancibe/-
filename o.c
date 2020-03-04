#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	while(1)
	{
		char a[1000];
		scanf("%s",a);
		if(strcmp(a, "0\0") == 0)break;
		
		int i = 0;
		int t = 0;
		while(a[i])
		{
			t += a[i] - '0';
			t %= 9;
			i++;
		}
		printf("%d\n",t == 0?9:t);
	}
	
	
	
	return 0;
}
