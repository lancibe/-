#include <stdio.h>
#include <string.h>

int main()
{
	char a[18];
	scanf("%s",a);
	int t = strlen(a);
	int flag;
	int i,j;
	if(a[t-1] == '1' || a[t-1] == '7' || a[t-1] == '3' || a[t-1] == '5' || a[t-1] == '9')
	{
		int T = 0;
		if(a[t-1] == '9')
		{
			T = 1;
			a[t-1] = '0';
		}
		else
		{
			T = 0;
			a[t-1] += 1;
		}
		for(i = t-2 ; i >= 0 ; i--)
		{
			if(T && a[i] == '9')
			{
				T = 1;
				a[i] = '0';
			}
			else 
			{
				T = 0;
				a[i] += 1;
			}
		}
		
		
		//Г§вд2
		for(i = t-1 ; i>= 0 ; i--)
		{
			
			switch(a[i])
			{
				case '0': a[i] = '5';T = 1;break;
				case '2': a[i] = '1';T = 0;break;
				case '4': a[i] = '2';T = 0;break;
				case '6': a[i] = '3';T = 0;break;
				case '8': a[i] = '4';T = 0;break;;
			}
			
		}
	}
	else
	{
		for(i = 0 ; i < t - 1 ; i++)
		{
			printf("%c",a[i]);
		}
		printf("%c",a[i]+1);
	}
	
	return 0;
}
