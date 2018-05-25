#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[101],start=0,end,mid,fin,n;
	scanf("%d",&n);
	for(end=0;end<n;end++)
	{
		scanf("%d",&a[end]);
		if(end+1!=n)
		{
			scanf(",");
		}
	}
	scanf("%d",&fin);
	while(a[mid]!=fin)
	{
		mid=(end+start)/2;
		if(a[mid]>fin)
		{
			end=mid;
			continue;
		}
		else if(a[mid]<fin)
		{
			start=mid;
			continue;
		}
	}
	printf("%d",mid+1);
	return 0;
}
