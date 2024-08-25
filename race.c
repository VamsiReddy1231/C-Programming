#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int N,s[10],i,j,t;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j=N-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",&s[i]);
    }
    if(s[i]<s[i+1])
    {
        int min;
        min=s[i+1]-s[i];
        printf("%d",min);
    }
    return 0;
}
