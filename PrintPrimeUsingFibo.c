#include<stdio.h>
int main()
{
	int a=0,b=1,c=0;
	int n,i,co=0;
	scanf("%d",&n);
	while(c<=n)
	{
		c=a+b;
		if(c>n)
		break;
		for(i=1;i<=c;i++)
		{
			if(c%i==0)
			{
				co++;
			}
		}
		if(co==2)
		{
			printf("%d\t",c);
		}
		a=b;
		b=c;
		co=0;
	}
}
