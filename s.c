#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	long long int a[n];
	int i;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%lld",&a[i]);
	}
	
	int j;
	for(i = 0 ; i < n-1 ; i++)
	for(j = i ; j < n-1 ; j++)
	{
		long long int t;
		if(a[j] > a[j+1])
		{
			t = a[j+1];
			a[j+1] = a[j];
			a[j] = t;
		}
	}
	
	if(n%2 == 0)
	printf("%lld",a[n/2+1]);
	else printf("%lld",a[(n-1)/2]);
	return 0;
}
