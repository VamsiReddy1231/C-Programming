#include<stdio.h>
int main()
{
	int key,a[15],i,n;
	scanf("%d%d",&key,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(key==a[i])
		printf("available");
		break;
	}
	if(i==n){
	printf("not");
}
}

