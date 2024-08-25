#include<stdio.h>
int main()
{
	int a[100],i,j,t=0,n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(t<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
