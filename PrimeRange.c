#include<stdio.h>
int main()
{
    int a,b;
    printf("ENter the intital and sending number\n");
    scanf("%d%d",&a,&b);
    int c=0;
    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==2)
        {
            printf("%d\n",i);
        }
        c=0;
    }
}