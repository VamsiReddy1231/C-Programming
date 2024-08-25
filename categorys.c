#include<stdio.h>
#include<string.h>
struct bill
{
	char category[10];
	float price;
}pay;
int main()
{
	strcpy(pay.category,"tomoto");
	pay.price=70.00;
	printf("%s\t%f",pay.category,pay.price);
}
