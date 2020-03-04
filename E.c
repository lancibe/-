#include<stdio.h>
#include<string.h>
#include<string.h>
int max(int,int);


int dp[101010];
int a[101010],b[101010];
int main()
{
	int i,j,k;
	int n,m;
	long long int abc;
	
    while (scanf("%d %d",&n,&m) && (n != 0 && m != 0))
    {
    	abc = 0;
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        
        
        //分两次循环 输入完整 
		for (i = 1 ; i <= n ; i++)
            scanf("%d", &a[i]);
        for (i = 1 ; i <= n ; i++)
            scanf("%d", &b[i]);
            
			
			
			
        for (i = 1 ; i <= n ; i++)
        {
            k = 1;
            
            while(k <= b[i])
            {
                for (j = m ; j >= k * a[i] ; j--)
                {
                    dp[j] = max(dp[j - k * a[i]],dp[j]);
                }
                b[i] -= k;
                k *= 2;
            }
            
            if (b[i] == 0)continue;
            
            for (j = m; j >= b[i] * a[i]; j--)
            {
                dp[j] =max( dp[j - b[i] * a[i]],dp[j]);
            }
        }
        
        for (i = 1 ; i <= m ; i++)
        {
            ans += dp[i];
        }
        printf("%lld\n",ans);
    }
    return 0;
}


int max(int a , int b)
{
	return a>b?a:b; 
}
 
