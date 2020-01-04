#include <stdio.h>

int main()
{
	int i,j = 1;
	int sum;
	int max,min;
	while(1)
	{
		sum = 0;
		if(j == 1)
		printf("Enter lower and upper integer limits:");
		else
		printf("Enter next set of limits:");
		scanf("%d%d",&min,&max);
		if(min >= max)
		{
			printf("Done\n");
			break;
		}
		else
		{
			sum = 0;
			for(i = min ; i <= max ; i++)
			{
				sum+= (i*i);
			}
			printf("The sums of the squares from %d to %d is %d\n",min*min , max*max , sum);	
		} 
		j++;
	}
	
	return 0;
}
