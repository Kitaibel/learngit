#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	long long int n,i;
	scanf("%lld",&n);
	if(n==1)
	{
		printf("1��������");
		exit(0);
	}
	
	if(n==2)
	{
		printf("2������");
		exit(0);
	}
	
	for(i=2;i<sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
			printf("%lld��������",n);
			exit(0);
		}
	}
	
	printf("%lld������",n);
	return 0;
}
