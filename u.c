#include <stdio.h>

int main()
{
	char a[500000];
	scanf("%s",a);
	int t = 0,i;
	int flag;
	int T;


	//先找第一个[ 
	for(i = 0 ; i < 500000 ; i++)
	{
		if(a[i] == '[')
		{
			T = 1;
			flag = i;
			break;
		}
		else T = 0;
	}
	if(T == 0)
	{
		printf("-1");
		return 0;
	}
	
	
	
	
	
	
	//找 [ 后面的第一个 : 
	for(i = flag+1 ; i < 500000 ; i++)
	{
		if(a[i] == ':')
		{
			T = 1;
			flag = i;
			break;
		}
		else T = 0;
	}
	if(T == 0)
	{
		printf("-1");
		return 0;
	}	
	
	
	
	
	
	
	
	
	
	
	//再找第二个 : ，同时在两个 : 之间找 | 的个数 
	for(i = flag+1 ; i < 500000 ; i++)
	{
		if(a[i] == ':')
		{
			T = 1;
			flag = i;
			break;
		}
		if(a[i] == 124)
		{
			t++;
		}
		T = 0;
	}
	
	if(T == 0)
	{
		printf("-1");
		return 0;
	}
	







	//找最后一个 ] 
	for(i = flag+1 ; i < 500000 ; i++)
	{
		if(a[i] == ']')
		{
			T = 1;
			flag = i;
			break;
		}
		T = 0;
	}	
	if(T == 0)
	{
		printf("-1");
		return 0;
	}
	
	
	
	printf("%d",t+4);
	return 1;
}
