#include<stdio.h>
int main()
{
	int i,n,a[1000],mid,f,l,fo=0,key;
	printf("enter the array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f=0,l=n-1,mid=(f+l)/2;
	printf("enter the key value");
	scanf("%d",&key);
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
