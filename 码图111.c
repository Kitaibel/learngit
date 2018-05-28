#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char str1[200]={0},str2[200]={0};
	gets(str1);
	gets(str2);
	int i,j,k,m=0,len1,len2,times=0,a[200]={0};
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<=len1-len2+1;i++)
	{
		if(str1[i]==str2[0])
		{
			k=i;
			for(j=1;j<len2;j++)
			{
				k++;
				if(str1[k]!=str2[j])
				{
					goto start;
				}
			}
			times++;
			a[m]=i;
			m++;
		}
		start:;
	}
	
	if(times)
	{
		printf("%dtimes",times);
		for(i=0;i<m;i++)
		{
			printf(",%d",a[i]);
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}
