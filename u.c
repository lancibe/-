#include <stdio.h>

int main()
{
	char a[500000];
	scanf("%s",a);
	int t = 0,i;
	int flag;
	int T;


	//���ҵ�һ��[ 
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
	
	
	
	
	
	
	//�� [ ����ĵ�һ�� : 
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
	
	
	
	
	
	
	
	
	
	
	//���ҵڶ��� : ��ͬʱ������ : ֮���� | �ĸ��� 
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
	







	//�����һ�� ] 
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
