#include <stdio.h>
int calfact(int n)
{
    if(n==0)
       return 1;
    else
      return n*calfact(n-1);
}
int main()
{
    int n,fact;
    printf("enter  n value=");
    scanf("%d",&n);
    fact=calfact(n);
    printf("%d",fact);

    return 0;
}
