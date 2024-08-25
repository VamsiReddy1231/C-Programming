#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
