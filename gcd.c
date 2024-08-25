#include <stdio.h>
int calgcd(int n1,int n2)
{
    if(n2==0)
        return n1;
       
    else
        return calgcd(n2,n1%n2);
}
int main()
{
    int n1,n2,gcd;
    printf("enter the two numbers=");
    scanf("%d%d",&n1,&n2);
    gcd=calgcd(n1,n2);
    printf("%d",gcd);

    return 0;
}
