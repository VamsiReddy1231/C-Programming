#include<stdio.h>
int main()
{
	int a[100],freq[100],i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	for(i=0;i<n;i++)
	{
	   int count=1;
		for(j=i+1;i<n;i++)
		{
			if(a[i]==a[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq!=0)
		{
			freq[i]=count;
		}
	}
	for(i=0;i<n;i++)
	{
		if(freq!=0)
		{
		printf("%d\t%d",a[i],freq[i]);
	}
	
}
}
