#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		if(n%4==0)
		printf("even and divisible by 4");
		else
		printf("even not divisible by 4");
	}
	if(n%2!=0)
	{
		if(n%3==0)
		printf("odd and divisible by 3");
		else
		printf("odd and not divisible by 4");
	}
	return 0;
}
