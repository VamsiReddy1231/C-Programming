#include<stdio.h>
int main()
{
	int i,n,a[100],key;
	printf("enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
		printf("element found location%d",i);
		break;}
	}
	if(i==n)
	{
		printf("not available:");
	}
	
}
