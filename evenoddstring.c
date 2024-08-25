#include <stdio.h>

int main() {

            int i,k;
            char s[100000],str[100000];
            
                scanf("%s",s);
                for(i=0,k=0;s[i]!='\0';i++)
                {
                    if(i%2==0)
                    {
                        str[k]=s[i];
                        k++;
                    }
                }
                str[k]=' ';
                for(i=0,k=k+1;s[i]!='\0';i++)
                {
                    if(i%2!=0)
                    {
                        str[k]=s[i];
                        k++;
                    }
                }
                str[k]='\0';
                printf("%s\n",str);
            
            
    
    return 0;
}
