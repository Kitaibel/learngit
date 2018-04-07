#include <stdio.h>
#include <stdlib.h>
#include <uchar.h>

int main(int argc, char *argv[]) 
{
	int n;
	char s[100];
	scanf("%d",&n);
	itoa(n,s,2);
	printf("%s\n",s);
	return 0;
}
