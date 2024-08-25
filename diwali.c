#include<stdio.h>
int lights(int);
int main()
{
	int n,result;
	printf("enter number of bulbs:");
	scanf("%d",&n);
	result=lights(n);
	printf("%d\t",result);	
}
int lights(int n)
{
	int ans=1,i;
	for(i=1;i<=n;i++)
	{
		ans=ans*2;
	}
	return(ans-1);
}
