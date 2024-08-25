#include<stdio.h>
int main()
{
    int n,a[10],count=0,i;
    printf("enter number of elements=");
    scanf("%d",&n);
    printf("enter the elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
          if(a[i]==a[i++])
          {
            count++;
          }
        
    }
    printf("total count of duplicate elements = %d\n ",count);
    return 0;
}
