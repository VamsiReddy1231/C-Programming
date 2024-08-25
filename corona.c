#include <stdio.h>
int main()
{
	int country[10][3],i,j,carona=0,ebola=0,swineflu=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the cases in country%d ",i+1);
		for (j=0;j<3;j++)
		{
		scanf("%d",&country[i][j]);
	  }
	}
	
	for (i=0;i<10;i++)
	{
		printf("The total number of persons infected in the country%d is: %d\n",i+1,(country[i][0]+country[i][1]+country[i][2]));
	}
	for (j=0;j<10;j++)
	{
		carona=carona+country[j][0];
	}
	
	for (j=0;j<10;j++)
	{
		ebola=ebola+country[j][1];
	}
	for (j=0;j<10;j++)
	{
		swineflu=swineflu+country[j][2];
	}
	printf("Carona Cases in all Countries is %d\n", carona);
	printf("Ebola Cases in all Countries is %d\n", ebola);
	printf("Swineflu Cases in all Countries is %d\n", swineflu);
	return 0;
}

