#include<stdio.h>
int main()
{
    goto A;
    int n=1;
    A:printf("%d\n",n++);
}