#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=10;i>=n;i--)
	printf("%d\t",i);
	return 0;
}
