#include <stdio.h>

int to0[300002]={0};

int main()
{
	int n,k,a1,i,m=1,result=0;
	to0[0]=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a1);
		if(a1==0)
		{
			to0[m]=i;
			++m;
		}
	}
	to0[m]=n;
	if(m-1<=k)
	{
		printf("%d",n);
		return 0;
	}
	for(i=0;i<=m-k;i++)
	{
		a1=to0[i+k+1]-to0[i]-1;
		if(a1>result)
		{
			result=a1;
		}
	}
	printf("%d",result);
	return 0;
}
