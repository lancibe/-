#include <stdio.h>
#include <stdlib.h>

#define sixty 60

int main()
{
	int a;
	int min,hour;
	while(1)
	{
		scanf("%d",&a);
		if(a <= 0)
		{
			break;
		}
		else
		{
			hour = a/sixty;
			min = a%sixty;
			printf("%d:%d\n",hour,min);
		}
	}
	
	return 0;
}
