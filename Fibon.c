#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
