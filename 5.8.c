#include <stdio.h>

int main()
{
	int a,b;
	printf("This program computes moduli\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d",&a);
	while(1)
	{
		printf("Now enter the first operand:");
		scanf("%d",&b);
		if(b <= 0)break;
		printf("%d %% %d is %d\n",b,a,b%a);
	}
	
	return 0;
}
