#include<stdio.h>

int main()
{
	int n;
	printf("€enter number:");
	scanf("%d",&n);
	bool isprime=true;
	int i=2;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			isprime=false;
			break;
		}
	}
	if(isprime)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
	return 0;
}
