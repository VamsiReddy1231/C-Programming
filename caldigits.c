#include <stdio.h>
int caldigits(int n)
{
    if(n/10==0)
       return n;
    else
      return n%10+caldigits(n/10);
}
int main()
{
    int n,d;
    printf("enter  n value=");
    scanf("%d",&n);
    d=caldigits(n);
    printf("%d",d);

    return 0;
}
