#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int i,m=0,l;
	char c[6]={};
	
	for(i=0;;i++)
	{
		scanf("%1c",&c[i]);
		if(c[i]=='\n')
		{
			if(i==0)
			{
				printf("error");
				return 0;
			}
			else
			{
				l=i-1;
				break;
			}
		}
		c[i]=c[i]-48;
		if(c[i]<0 || c[i]>9 || i==4)
		{
			printf("error");
			return 0;
		}	
	}
	for(i=l;i>=0;i--)
	{
		m=m+c[i]*pow(10,l-i);
	}
	if(m<3 || m>1000)
	{
		printf("error");
		return 0;
	}
	else
	{
		for(i=2;i<=sqrt(m)+1;i++)
		{
			if(m%i==0)
			{
				printf("no");
				return 0;
			}
		}
	}
	printf("yes");
	return 0;
}
