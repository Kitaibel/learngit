#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	long long x;
	float q;
	int n,i,r;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		q=log(x)/log(2);
		r=q;
		if(q!=(int)q)
		{
			r++;
		}
		printf("%d\n",r);
	}
	return 0;
}
