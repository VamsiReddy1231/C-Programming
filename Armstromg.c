#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0;
    int c=0,r=0;
    scanf("%d",&n);
    int t=0;
    t=n;
    int t1=0;
    t1=n;
    while(t)
    {
        t=t/10;
        c++;
    }
    while(n)
    {
        r=n%10;
        s=s+(int)pow(r,c);
        n=n/10;
    }
    if(t1==s)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}