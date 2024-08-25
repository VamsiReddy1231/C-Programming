#include<stdio.h>
int main()
{
	int x,fa,d;
	scanf("%d",&x);
    if(x<=100)
    {
    	d=0;
    	fa=x-d;
    	printf("%d",x);
	}
	else if(100<x<=1000)
	{
		d=25;
		fa=x-d;
		printf("%d",fa);
	}
	else if(1000<x<=5000)
	{
		d=100;
		fa=x-100;
		printf("%d",fa);
	}
	else if(x>5000)
	{
		d=500;
		fa=x-d;
		printf("%d",fa);
	}
	else
	printf("invalid");
}
