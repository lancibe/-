#include <stdio.h>
#include <string.h>
int N = 1000;

int main()
{
	int c[N];
	int v[N];
	int value[N];
	
	int T;
	int n,s;
	scanf("%d",&T);
	while(T--)
	{
		memset(v,0,sizeof(v));
		memset(c,0,sizeof(c));
		memset(value,0,sizeof(value));
		
		scanf("%d%d",&n,&s);
		
		
		int i,j;
		
		for(i = 0 ; i < n ; i++)
		{
			scanf("%d",&v[i]);
		}
		
		for(i = 0 ; i < n ; i++)
		{
			scanf("%d",&c[i]);
		}
		
		for(i = 0 ; i < n ; i++)
		{
			for(j = s ; j >= c[i] ; j--)
			{
				value[j] = (value[j] > (value[j - c[i]] + v[i]) ? value[j] : (value[j - c[i]] + v[i]) );
			}
		}
		
		printf("%d\n",value[s]);
	}
	
	
	
	return 0;
} 
