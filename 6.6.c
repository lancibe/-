#include <stdio.h>
#include <math.h>

int main()
{
	int max,min;
	scanf("%d%d",&min,&max);
	int i;
	for(i = min ; i <= max ; i++)
	{
		printf("%d\t%d\t%d\n",i, i*i, i*i*i);
	}
	
	return 0;
}
