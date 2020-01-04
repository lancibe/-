#include <stdio.h>

void fun(double);

int main()
{
	printf("请输入一个double类型的数据");
	double a;
	scanf("%lf",&a);
	fun(a);
	
	return 0;
}

void fun(double a)
{
	printf("%lf",a*a*a);
}
