#include<stdio.h>
void func(int a[],int n);
int main()
{
	int i,a[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	func(a,n);
}
void func(int a[],int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
