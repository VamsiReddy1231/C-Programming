#include<stdio.h>
int main()
{
	int d1,d2,m1,m2,y1,y2,fine;
	scanf("%d%d%d%d%d%d",&d1,&d2,&m1,&m2,&y1,&y2);
	if(d2<=d1)
	{
	fine=0;
	printf("%d",fine);
    }
    else if((d2>d1)&&(m1==m2)&&(y1==y2))
    {
    	fine=15*(d2-d1);
    	printf("%d",fine);
	}
	else if((m2>m1)&&(y1==y2))
	{
		fine=500*(m2-m1);
		printf("%d",fine);
	}
	else{
	fine=10000;
	printf("%d",fine);}

}
