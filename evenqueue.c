#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
void enqueue(int value);
void dequeue();
void display();
int queue[SIZE];
int front=-1,rear=-1;
int main()
{
	int value,choice;
	while(1)
	{
		printf("\n\n*****menu*****\n");
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit:");
		printf("enter choice:");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter which value to be insert:");
		       printf("enter the value:");
		       scanf("%d",&value);
		       enqueue(value);
		       break;
		case 2:dequeue();
		       break;
		case 3:display();
		       break;
		case 4:exit(0);
		default:("u take wrong selection:");
        	}
       }
	}
	void enqueue(int value)
	{
		if(rear==SIZE-1)
			printf("queue is full");
		else if(front==-1 && rear==-1)
		{
			front++;
			rear++;
			queue[rear]=value;
			printf("%d",queue[rear]);
		}
		else
		{
		rear++;
		queue[rear]=value;
		printf("successfully inserted:%d",queue[rear]);
	    }
	}
	void dequeue()
	{
		if(front==-1)
			printf("queue is empty:");
		else
		{
			printf("\n deleted=%d",queue[front]);
		 front++;
		}
	}
	void display()
	{
		if(front==-1)
			printf("queue is empty:");
		else
		{
			int i,s=0;
			for(i=front;i<=rear;i++){
				if(queue[i]%2==0)
			
                s=s+queue[i];	
		}
		printf("%d",s);
		}}

