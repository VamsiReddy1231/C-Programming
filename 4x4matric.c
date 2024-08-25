#include<stdio.h>
int main()
{
int r=4,c=4,i,j;
int a[r][c];
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
int zero,one;
for (j=0;j<4;j++)
{
	zero=0,one=0;
for (i=0;i<4;i++)
{
	if (a[i][j]==0)
	zero++;
	else if(a[i][j]==1)
	one++;
}
if (zero==4)
printf("Coloumn %d has all Zero's\n",j+1);
else if(one==4)
printf("Coloumn %d has all One's\n",j+1);
}

for (j=0;j<4;j++)
{
	zero=0,one=0;
for (i=0;i<4;i++)
{
	if (a[j][i]==0)
	zero++;
	else if(a[j][i]==1)
	one++;
}
if (zero==4)
printf("Row %d has all Zero's\n",j+1);
else if(one==4)
printf("Row %d has all One's\n",j+1);
} 
zero=0;
one=0;
for (i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		if (i==j)
		{
			if (a[i][j]==0)
			zero++;
			else if(a[i][j]==1)
			one++;
		}
	}
}
if (zero==4)
printf("Diagonal Elements has all Zero's\n");
else if(one==4)
printf("Diagonal Elements has all One's\n");

return 0;
}
