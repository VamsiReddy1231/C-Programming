#include<stdio.h>
void quicksort(int a[],int first,int last)
{
	int i,j,t=0,pivot;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
	while(i<j)
	{
		while(a[i]<=a[pivot] && i<last)
		i++;
		while(a[j]>a[pivot])
		j--;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
			t=a[pivot];
			a[pivot]=a[j];
			a[j]=t;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}
}
int main()
{
	int a[100],i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
