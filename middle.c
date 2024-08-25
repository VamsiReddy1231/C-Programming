#include<stdio.h>
int main()
{
	int r,c,i,j,a[10][10];
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==r/2)
			{
				printf("%d",a[i][j]);
			}
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==c/2)
			{
				printf("%d",a[i][j]);
			}
		}
	}
	printf("\n");
	return 0;
	
}
