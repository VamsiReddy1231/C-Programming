#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2,a[10][10],b[10][10],c[10][10];
	printf("enter the rows and colums of 1st matrix:");
	scanf("%d%d",&r1,&c1);
	printf("enter the rows and columns of 2nd matrix:");
	scanf("%d%d",&r2,&c2);
	printf("enter the 1st matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2nd matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d",c[i][j]);
	}
}
}
