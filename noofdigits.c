#include <stdio.h>
int caldigits(int n)
{
    static int count=0;
    if(n/10==0)
        return count+1;
       
    else
        count++;
        caldigits(n/10);
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
