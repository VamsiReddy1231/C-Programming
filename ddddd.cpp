#include<stdio.h>
void fux(int n);
int main()
{
    int n;
    scanf("%d",&n);
    
    fux(n);
    return 0;
}
void fux(int n)
{
    char a[n];
    scanf("%s",a);
    int i;
    int j,c=0;
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        if(a[i]!=a[j])
        c++;
    }
    if(c==0)
    printf("palindram");
    else
    printf("not a palindram");
}
