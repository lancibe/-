#include <stdio.h>

int main()
{
	int a;
	int week,day;
	while(1)
	{
		scanf("%d",&a);
		if(a <= 0)break;
		week = a/7;
		day = a%7;
		printf("%d days are %d weeks, %d days.\n",a,week,day);	
	}
	return 0;
}
