#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2,a[10][10],b[10][10],s=0,c[i][j],k;
    printf("enter no 0f rows and coloums:");
    scanf("%d%d",&r1,&c1);
    printf("enter no 0f rows and coloums:");
    scanf("%d%d",&r2,&c2);
    if(c1!=r1)
	{
		printf("matrix is not found");
	}
	printf("\nenter the matrix a elements:\n");
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nenter the matrix b elements:\n");
    for(i=0;i<r2;i++)
    {
    	for(j=0;j<c2;j++)
    	{
    		scanf("%d\t",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+a[i][j]*b[k][j];
			}
		}
	}
	printf("\n product of matrix:\n");
	printf("\nenter c matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
