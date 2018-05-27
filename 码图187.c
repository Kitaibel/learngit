#include <stdio.h>

int main(int argc, char *argv[])
{
	float a,b,c;
	for(a=0;a<=20;a++)
	{
		for(b=0;b<=(100-5*a)/3.0;b++)
		{
			for(c=0;c<=(100-5*a-3*b)*3;c=c+3)
			{
				if(a+b+c==100 && 5*a+3*b+c/3.0==100)
				{
					printf("%.0f,%.0f,%.0f,",a,b,c);
				}
			}
		}
	}
	return 0;
}
