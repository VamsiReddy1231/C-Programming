#include<stdio.h>
void rev();
int main()
{
	void rev();
}
void rev()
{
 int i,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
