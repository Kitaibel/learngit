#include <stdio.h>
#include <string.h>

int sum[999999]={0};
char a[31]={0};

int main(int argc, char *argv[]) 
{
	int b,i,m=0,j=1,length,si,p=0;
	while((scanf("%s",a))!=EOF)
	{
		length=strlen(a);
		for(i=length-1;i>=0;i--)
		{
			if(a[i]==EOF)
			{
				j=0;
			}
			a[i]-=48;
			if(a[i]<0)
			{
				break;
			}
			sum[length-i-1]+=a[i]; 
			if(length-i-1>p)
			{
				p=length-i-1;
			}
		}
		for(i=0;i<=30;i++)
		{
			a[i]=0;
		}
	}
	for(i=0;i<999999;i++)
	{
		sum[i+1]=sum[i]/10+sum[i+1];
		sum[i]=sum[i]%10;
		if(i>=p && sum[i+1]==0)   //ÅÐ¶Ï×î¸ßÎ» 
		{
			m=i;
			break;
		}
	}	
	
	for(i=m;i>=0;i--)
	{
		printf("%d",sum[i]);
	}
	return 0;
}
