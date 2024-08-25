#include<stdio.h>
int main()
{
    int i,n;
    char s[1000];
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            s[i]='4';
        }
    }
    printf("%s",s);
}