#include <stdio.h>
#include <string.h>
void count(char* str)
{
	int i,l,a=0,b=0,c=0;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==32)
		{
			c++;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
			b++;
		}
		else if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
		{
			a++;
		}
	}
	printf("%d,%d,%d",a,b,c);
}
int main(int argc, char *argv[])
{
	char c[100]="qwsqwdqwdqdwqdqwd213239 1238 93 1";
	count(c);
	return 0;
}
