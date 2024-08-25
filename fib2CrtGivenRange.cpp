#include<stdio.h>
int main()
{
	int start,end,a=-1,b=1;
	printf("Enter the numbers");
	scanf("%d%d",&start,&end);
	int i,c=0;	
	while(c<=end)
	{
		c=a+b;
		if(c>=start && c<=end)
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
