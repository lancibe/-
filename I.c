#include <stdio.h>

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int i;
	int a[n];
	int sum = 0,flag = 0;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i = 0 ; i < n ; i++)
	{
		if(a[i] > k)
			break;
		else
		{
			sum++;
		}
	}

	if(sum != n)	
	for(i = n-1 ; i >= 0 ; i--)
	{
		if(a[i] > k)
			break;
		else
		{
			sum++;
		}		
	}
	
	
	printf("%d",sum);
	return 0;
} 
