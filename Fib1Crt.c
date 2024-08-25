#include<stdio.h>
int main()
{
	int a=-1,b=1,c=0;
	int n,i;
	printf("Enter the number n");
	scanf("%d",&n);
	while(c<=n)
	{
		c=a+b;
		if(c>n)
		break;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
