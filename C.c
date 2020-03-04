#include<stdio.h>
#include<string.h>



int v[520],m[520],total[520][10101];
int main()
{
	int T;
	scanf("%d",&T);
	
	int i,j;
	
	while(T--)
	{
		memset(v,0,sizeof(v));
		memset(m,0,sizeof(m));
		memset(total,0,sizeof(total));
		int a,b;
		scanf("%d %d",&a,&b);
		int n;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&v[i],&m[i]);
		}
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=b-a;j++)
			total[i][j]=100000000;
		}
		total[0][0]=0;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=b-a;j++)
			{
				if(m[i]>j)
				{
					total[i][j]=total[i-1][j];
				}
				else
				{
					total[i][j]=total[i-1][j]<(total[i][j-m[i]]+v[i]) ? total[i-1][j] : (total[i][j-m[i]]+v[i]);
				}
			}
		}
		if(total[n][b-a]==100000000)
		{
			printf("This is impossible.\n");
		}
		else
		printf("The minimum amount of money in the piggy-bank is %d.\n",total[n][b-a]);
	}
	return 0;
}
