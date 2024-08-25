#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *start;  
void insertatbeg();   
void insertlast();  
void insertspecific();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search();  
int main()  
{  
    int choice=0;  
    while(choice!=9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Display\n9.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:   insertatbeg();               break;  
            case 2:   insertlast();              break;  
            case 3:   insertspecific();             break;  
            case 4:   begin_delete();             break;  
            case 5:   last_delete();              break;  
            case 6:   random_delete();            break;  
            case 7:   search();                   break;  
            case 8:  display();                 break;  
            case 9:   exit(0);             break;  
            default:  printf("Please enter valid choice..");  
        }  
    } 
    return 0; 
}  
void insertatbeg()  
{  
    struct node *temp1;  
    int value;  
    temp1 = (struct node *) malloc(sizeof(struct node *));  
    if(temp1 == NULL)  
    {  
        printf("\nLL IS EMPTY");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&value);    
        temp1->data = value;  
        temp1->next = start;  
        start = temp1;  
        printf("\nNode inserted");  
    }  
}  
void insertlast()  
{  
    struct node *temp1,*temp;  
    int value;     
    temp1 = (struct node*)malloc(sizeof(struct node));      
    if(temp1 == NULL)  
    {  
        printf("\nLL IS EMPTY");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&value);  
        temp1->data = value;  
        if(start == NULL)  
        {  
            temp1 -> next = NULL;  
            start = temp1;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = start;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = temp1;  
            temp1->next = NULL;  
            printf("\nNode inserted");  
        }  
    }  
}  
void insertspecific()  
{  
    int i,loc,value;   
    struct node *temp1, *temp;  
    temp1 = (struct node *) malloc (sizeof(struct node));  
    if(temp1 == NULL)  
    {  
        printf("\nLL IS EMPTY");  
    }  
    else  
    {  
        printf("\nEnter element value");  
        scanf("%d",&value);  
        temp1->data = value;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=start;  
        for(i=0;i<loc;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
        }  
        temp1 ->next = temp ->next;   
        temp ->next = temp1;   
        printf("\nNode inserted");  
    }  
}  
void begin_delete()  
{  
    struct node *temp1;  
    if(start == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        temp1 = start;  
        start = temp1->next;  
        free(temp1);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
void last_delete()  
{  
    struct node *temp1,*temp2;  
    if(start == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(start -> next == NULL)  
    {  
        start = NULL;  
        free(start);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
    else  
    {  
        temp1 = start;   
        while(temp1->next != NULL)  
        {  
            temp2 = temp1;  
            temp1 = temp1 ->next;  
        }  
        temp2->next = NULL;  
        free(temp1);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
void random_delete()  
{  
    struct node *temp1,*temp2;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    temp1=start;  
    for(i=0;i<loc;i++)  
    {  
        temp2 = temp1;       
        temp1 = temp1->next;  
        if(temp1 == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    temp2 ->next = temp1 ->next;  
    free(temp1);  
    printf("\nDeleted node %d ",loc+1);  
}  
void search()  
{  
    struct node *temp1;  
    int value,i=0,flag;  
    temp1 = start;   
    if(temp1 == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter value which you want to search?\n");   
        scanf("%d",&value);  
        while (temp1!=NULL)  
        {  
            if(temp1->data == value)  
            {  
                printf("value found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            temp1 = temp1 -> next;  
        }  
        if(flag==1)  
        {  
            printf("Value not found\n");  
        }  
    }     
}  
void display()  
{  
    struct node *temp1;  
    temp1 = start;   
    if(temp1 == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (temp1!=NULL)  
        {  
            printf("\n%d",temp1->data);  
            temp1 = temp1 -> next;  
        }  
    }  
}
