#include <stdio.h>
#include <math.h>

double fun(double,double);

int main()
{
	double a,b;
	while(1)
	{	
		if(1==scanf("%lf%lf",&a,&b))break;

		printf("%lf\n",fun(a,b));
		
	}
	return 0;
}

double fun(double a , double b)
{
	double D;
	D = fabs(a-b);
	return D/(a*b);
}
