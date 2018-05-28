#include <stdio.h>
int find(int n)
{
	int i,a,b,c,j=0;
	for(i=100;i<=n;i++)
	{
		if(i==1000)
		{
			return 0;
		}
		a=i/100;
		b=(i-a*100)/10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)
		{
			j++;
		}
	}
	return j;
} 
