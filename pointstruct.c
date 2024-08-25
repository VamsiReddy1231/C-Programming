#include<stdio.h>
struct student
{
	char gender;
	int rollno;
	float height;
	char name[10];
}s10[3];
int main()
{
	int i;
	struct student *ps10=s10;
	for(i=0;i<3;i++)
	{
		printf("enter gender:");
		scanf(" %c",&ps10->gender);
		printf("enter rollno:");
		scanf("%d",&ps10->rollno);
		printf("enter height:");
		scanf("%f",&ps10->height);
		printf("enter name:");
		scanf(" %s",ps10->name);
		ps10++;
	}
	ps10=s10;
	for(i=0;i<3;i++)
	{
		printf("gender=%c\nrollno=%d\nheight=%f\nname=%s",ps10->gender,ps10->rollno,ps10->height,ps10->name);
	}
	return 0;
}
