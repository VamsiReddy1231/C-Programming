#include<stdio.h>
int main()
{
	int i,n,key,f,l,mid,a[100],found=0;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter key value:");
	scanf("%d",&key);
	f=0,l=n-1,mid=(f+1)/2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(f<=l)
	{
		if(key==a[mid])
		{
			printf("location of found element %d",mid);
			found=1;
			break;
		}
		else if(key>a[mid])
		{
			f=mid+1;
		}
		else if(key<a[mid])
		{
			l=mid-1;
		}
		mid=(f+l)/2;
	}
	if(f>l)
	{
		printf("not found");
	}
	return 0;
}
