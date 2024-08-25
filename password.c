#include<stdio.h>
#include<string.h>
int main()
{
	
	char s[1000];
	int i,len,c=0,f=0,f1=0,f2=0,f3=0;
	printf("enter the password:");
	scanf("%s",s);
	len=strlene(s);
	for(i=0;i<len;i++)
	{
		if((s[i]>='A')&&(s[i]<='Z'))
		{
			if(f==0)
			{
				c++;
				f=1;
			}
		}
		else if((s[i]>='a')&&(s[i]<='z'))
		{
			if(f1==0)
			{
				c++;
				f1=1;
			}
		}
		else if((s[i]>=0)&&(s[i]<=9))
		{
			if(f2==0)
			{
				c++;
				f2=1;
			}
		}
		else
		{
			if(f3==0)
			{
				c++;
				f3==1;
			}
		}
	}
	if((c>=4)&&(len<=8))
	{
		printf("valid");
	}
	else
	{
		printf("invalid");
	}
}
