#include <stdio.h>

void Temperatures(double);

int main()
{
	double a;
	while(1)
	{
		printf("请输入一个华氏温度:");
		if(1 != scanf("%lf", &a))break;
		else
		{
			Temperatures(a);
		}
	}
	
	return 0;
}

void Temperatures(double a)
{
	double b,c;
	b = 5.0/9.0*(a - 32.0);
	c = 5.0/9.0*(a - 32.0)+273.16;
	printf("%.2f,%.2f\n",b,c);
}
 
 
