#include<stdio.h>
int main()
{
	int a,b,c,*pa,*pb;
	scanf("%d%d",&a,&b);
	*pa=&a;
	*pb=&b;
	int c=*a+*b;
	printf("%d",c);
}
