#include <stdio.h>

void fun(double);

int main()
{
	printf("������һ��double���͵�����");
	double a;
	scanf("%lf",&a);
	fun(a);
	
	return 0;
}

void fun(double a)
{
	printf("%lf",a*a*a);
}
