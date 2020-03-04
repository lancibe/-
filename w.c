#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	char a[n][m];
	int i,j;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%s",a[i]);
	}
	
	int num = 0;
	
	//先遍历一遍 找到最高的成绩	 
	char max[m];
	for(j = 0 ; j < m ; j++)
	{
		max[j] = a[0][j];
		for(i = 0 ; i < n ; i++)
		{
			if(max[j] <= a[i][j])
			max[j] = a[i][j];
		}
		
	}
	
	//再遍历一遍 赋值 
	for(j = 0 ; j < m ; j++)
	{
		for(i = 1 ; i < n ; i++)
		{
			if(a[i][j] == max[j])
			a[i][j] = 1;
			else a[i][j] = 0;
			
		}
		
	}


	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			if(a[i][j])
			{
				num++;
				break;
			}
		}
	}
	
	printf("%d",num);
	return 0;
}
