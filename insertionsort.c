#include<stdio.h>
int main()
{
	int i,j,a[100],n,t=0;
	printf("enter the array size:");
	scanf("%d",&n);
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
