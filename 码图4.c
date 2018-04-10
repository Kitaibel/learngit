#include <stdio.h>

int main()
{
	long long int n,m;
	scanf("%lld",&m);
	n=m;
	printf("%lld ",n);
	n*=m;
	printf("%lld ",n);
	n*=m;
	printf("%lld ",n);
	n*=m;
	printf("%lld ",n);
	n*=m;
	printf("%lld\n",n);
	return 0;
}
