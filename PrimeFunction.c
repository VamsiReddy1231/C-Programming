#include<stdio.h>
void primeNo(int n);
int main()
{
    int n;
    scanf("%d",&n);
    primeNo(n);
}
void primeNo(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}