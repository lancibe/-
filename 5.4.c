#include <stdio.h>

int main()
{
	float a;
	float feet,inch;
	while(1)
	{
		printf("Enter a height in centimeters:");
		scanf("%f",&a);
		if(a <= 0)break;
		inch = a/2.54;
		feet = a/30.48;
		
		printf("%.1f cm = %.0f feet, %.1f inches\n",a,feet,inch);
		
	}
	
	return 0;
}
