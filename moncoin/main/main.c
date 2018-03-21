#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int money,a[1002][5]={},n,s,i,savemoney[1002][3]={},k,m,sum=0,msum=0;
	scanf("%d %d",&n,&s);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
		savemoney[i][1]=a[i][1];
		savemoney[i][0]=i;
		sum+=a[i][0];
	}
	for(i=0;i<n-1;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(savemoney[i][1]>savemoney[k][1])
			{
				m=savemoney[i][0];
				savemoney[i][0]=savemoney[k][0];
				savemoney[k][0]=m;
				m=savemoney[i][1];
				savemoney[i][1]=savemoney[k][1];
				savemoney[k][1]=m;
			}
		}
	}
	if(sum==s)
	{
		printf("0");
	}
	i=0;
	if(sum>s)
	{
		for(;sum>s;)
		{
			if(a[savemoney[i][0]][0]>a[savemoney[i][0]][2])
			{
				a[savemoney[i][0]][0]--;
				msum+=savemoney[i][1];
				sum--;
			}
			else
			{
				i++;
				if(i==n)
				{
					printf("impossible");
					break;
				}
			}
			if(sum==s)
			{
				printf("%d",msum);
			}
		}
	}
	if(sum<s)
	{
		for(;sum<s;)
		{
			if(a[savemoney[i][0]][0]<a[savemoney[i][0]][3])
			{
				a[savemoney[i][0]][0]++;
				msum+=savemoney[i][1];
				sum++;
			}
			else
			{
				i++;
				if(i==n)
				{
					printf("impossible");
					break;
				}
			}
			if(sum==s)
			{
				printf("%d",msum);
			}
		}
	}
	
	
	return 0;
}
