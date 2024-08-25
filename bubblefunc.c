#include<stdio.h>
void bubble(int [],int,int);
int main()
{
	int a[100],i,n;
	printf("enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble(a,n,i);
	return 0;
}
void bubble(int a[],int n,int i)
{
	int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]=a[j]*a[j+1];
				a[j+1]=a[j]/a[j+1];
				a[j]=a[j]/a[j+1];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

