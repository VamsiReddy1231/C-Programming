#include<stdio.h>
void search();
int main()
{
	search();
}
void search()
{
int i,n,key,a[100];
	printf("\nenter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		printf("found");
		break;
	} 
	}
	if(i==n)
	{
	printf("not found");
}
return 0;
}
