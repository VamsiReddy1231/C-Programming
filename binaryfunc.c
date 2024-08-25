#include<stdio.h>
void binarysearch();
int main()
{
	binarysearch();
}
void binarysearch()
{
	int i,mid,f,l,n,key,a[100];
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter key value:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		printf("enter array elements:");
		scanf("%d",&a[i]);
	}
	f=0,l=n-1;mid=(f+l)/2;
	while(f<=l)
	{
		if(key==a[mid])
		{
			printf("found");
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
}
