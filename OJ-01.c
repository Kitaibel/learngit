#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int n,i,j,l,s0,a;
	float s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&l);
		s0=0;
		s=0;
		for(j=0;j<l;j++)
		{
			scanf("%1d",&a);
			switch(a)
			{
				case 0:s0++;break;
				case 1:
					{
						if(s0)
						{
							s0--;
						}
						else
						{
							s++;
						}
					}break;
			}
			if(j==l-1)
			{
				s=s+s0;
			}
		}
		printf("%.3f\n",&s);
	}
	return 0;
}
