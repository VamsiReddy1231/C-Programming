#include<stdio.h>
int main()
{
    int ch;
    float r,s1,l,b,base,height;
    while(1)
    {
        printf("\n1.Circle\n2.Square\n3.Rectangle\n4.triangle\n");
        printf("\n**************Enter your Choice***************\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the radius of the circle\n");
                   scanf("%f",&r);
                   printf("The Area of circle : %f\n",3.14*r*r);break;
            case 2:printf("\nEnter the side of the square\n");
                   scanf("%f",&s1);
                   printf("The Area of the square is : %f\n",s1*s1);
                   break;
            case 3:printf("\nEnter the length and breadth of the Rectangle\n");
                   scanf("%f%f",&l,&b);
                   printf("The Area of the Rectangle is : %f\n",l*b);
                   break;
            case 4:printf("\nEnter the base and height of the triangle\n");
                   scanf("%f%f",&base,&height);
                   printf("The Area of the square is : %f\n",0.5*base*height);
                   break;
            default:printf("Plz enter the valid number from 1-4!!!!");
        }
    }
}