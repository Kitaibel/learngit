#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a,b,c,d,x,y;
	int mul[11][11]={{1,2,2,3,3,2,3,3,4,4},
					 {2,2,3,3,4,3,3,4,4,4},
					 {2,3,2,3,3,3,4,3,4,4},
					 {3,3,3,3,4,4,4,4,4,5},
					 {3,4,3,4,3,4,4,4,5,4},
					 {2,3,3,4,4,2,3,3,4,4},
					 {3,3,4,4,4,3,3,4,4,5},
					 {3,4,3,4,4,3,4,3,4,4},
					 {4,4,4,4,5,4,4,4,4,5},
					 {4,5,4,5,4,4,5,4,5,4}};
	scanf("%d %d",&x,&y);
	if(x>=y)
	{
		a=x/10;
		b=x%10;
		c=y/10;
		d=y%10;
	}
	else
	{
		a=y/10;
		b=y%10;
		c=x/10;
		d=x%10;
	}
	if(a==0 && c==0)
	{
		if(b==1 && d==9)
			printf("4");
		else
		{
			printf("%d",mul[b][d]-1);
		}
	}
	else
	{
		printf("%d",a-1+mul[b][d]);
	}
	return 0;
}
