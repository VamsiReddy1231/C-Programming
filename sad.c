#include<stdio.h>
#include<stdlib.h>
void menu();
void newaccount();
void viewlist();
void edit();
void transact();
void remove();
int main()
{
	int choice;
	while(1)
	{
		printf("\n****** WELCOME TO THE MAIN MENU **********\n");
		printf("\n1.Create new account\n");
		printf("\n2.Update information of existing account\n");
		printf("\n3.for transaction\n");
		printf("\n4.Check the details of existing account\n");
		printf("\n5.Removing existing account\n");
		printf("\n6.View customers list\n");
		printf("\n7.exit\n");
		switch(choice)
		{
			case 1:menu();break;
			case 2:newaccount();break;
			case 3:viewlist();break;
			case 4:edit();break;
			case 5:transact();break;
			case 6:remove();break;
			case 7:exit(0);break;
			default:printf("\nu take wrong selection\n");
		}
	}
}
