#include <stdio.h>
#include <math.h>


int main()
{
	double a,b;
	while(1)
	{	
		if(1==scanf("%lf%lf",&a,&b))break;
		double D;
		D = fabs(a-b);
		printf("%lf\n",D/(a*b));
		
	}
	return 0;
}

