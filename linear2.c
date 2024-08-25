#include<stdio.h>
int main()
{
	int n,a[10],key,i;
	printf("enter numbers:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	if(a[i]==key)
	{
	printf("found");
    }
    if(i==n)
    {
    	printf("not found");
	}
	return 0;
}
