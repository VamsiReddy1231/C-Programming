#include<stdio.h>
int main()
{
	int a=20,b=10,c,*pa,*pb;
	pa=&a;
	pb=&b;
	c=*pa;
	*pa=*pb;
	*pb=c;
	printf("%d\t%d",*pa,*pb);
}
