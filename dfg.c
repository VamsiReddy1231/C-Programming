#include<stdio.h>
#include<math.h>
int main()
{
    // printf("pow = %f\n",pow(2,3));
    // printf("square value = %f\n",sqrt(28));
    // printf("square value = %f\n",sqrt(-2));
    // printf("exp=%f\n",exp(28));
    // printf("ceil=%f\n",ceil(28.1));
    // printf("sqrt=%f\n",sqrt(28.02));
    // printf("log=%f\n",log(28));
    // printf("%f\n",sin(45));
    // int x=2,y=3;
    // float c;
    // c=sqrt(log(x)+exp(x)+sin(x))/sqrt(pow(x,2)+cos(x)+tan(x));
    // printf("%f\n",c);

    // int n;
    // scanf("%d",&n);
    // if(n%2==0)
    // printf("even");
    // else
    // printf("odd");
    // if((n&1)==0)
    // int m1,m2,m3;
    // scanf("%d%d%d",&m1,&m2,&m3);
    // if(m1>35)
    // {
    //     if(m2>35)
    //     {
    //         if(m3>35)
    //         {
    //             printf("pass");
    //         }
    //     }
    // }
    // else
    // {
    //     printf("fail");
    // }
    // int n;
    // printf("Enter the number\n");
    // scanf("%d",&n);
    // if(n==1)
    // printf("mon");
    // else if(n==2)
    // printf("Tue");
    // else if(n==3)
    // printf("Wed");
    // else if(n==4)
    // printf("Thur");
    // else if(n==5)
    // printf("Fri");
    // else if(n==6)
    // printf("Sat");
    // else if(n==7)
    // printf("sun");
    // else
    // printf("Invalid please enter correct number from 1-7");
    // char s;
    // printf("Enter the letter\n");
    // scanf("%c",&s);
    // if(s=='a'||s=='A')
    // printf("%c is a vowel",s);
    // else if(s=='e'||s=='E')
    // printf("%c is a vowel",s);
    // else if(s=='i'||s=='I')
    // printf("%c is a vowel",s);
    // else if(s=='o'||s=='O')
    // printf("%c is a vowel",s);
    // else if(s=='u'||s=='U')
    // printf("%c is a vowel",s);
    // else
    // printf("%c is not a vowel",s);
    // int m1,m2,m3;
    // scanf("%d%d%d",&m1,&m2,&m3);
    // float avg;
    // avg=(m1+m2+m3)/3;
    // if(avg>=80)
    // printf("GradeA");
    // else if(avg>=70 && avg<80)
    // printf("B");
    // else if(avg>=60 && avg<70)
    // printf("C");
    // else if(avg>=50 && avg<60)
    // printf("D");
    // else if(avg>=40 && avg<50)
    // printf("E");
    // else
    // printf("Fail");

    // min of given 3 numbers
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if(a<b && a<c)
    // printf("a is smaller");
    // else if(b<c && b<a)
    // printf("b is smaller");
    // else
    // printf("c is smaller");

    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // if(a>b && a>c)
    // printf("a is large");
    // else if(b>c && b>a)
    // printf("b is larger");
    // else
    // printf("c is larger");
    // int n;
    // printf("****Enter the number 1-12\n");
    // scanf("%d",&n);
    // switch(n)
    // {
    //     case 1:printf("January\n");break;
    //     case 2:printf("February\n");break;
    //     case 3:printf("March\n");break;
    //     case 4:printf("April\n");break;
    //     case 5:printf("May\n");break;
    //     case 6:printf("June\n");break;
    //     case 7:printf("July\n");break;
    //     case 8:printf("August\n");break;
    //     case 9:printf("September\n");break;
    //     case 10:printf("October\n");break;
    //     case 11:printf("November\n");break;
    //     case 12:printf("December\n");break;
    //     default:printf("Invalid !!!!! please enter number 1-12");
    // }

//     int a,b,n;
//     float c;
//     while(1)
//     {
//         printf("\n1.Add\n2.Sub\n3.Multiplication\n4.Divison\n");
//         printf("\nEnter your choice\n");
//         scanf("%d",&n);
//         switch(n)
//         {
//             case 1:printf("Enter two numbers");
//                    scanf("%d%d",&a,&b);
//                    c=a+b;
//                    printf("Add = %d\n",c);
//                    break;
//             case 2:printf("Enter two numbers");
//                    scanf("%d%d",&a,&b);
//                    c=a-b;
//                    printf("Sub = %d\n",c);
//                    break;
//             case 3:printf("Enter two numbers");
//                    scanf("%d%d",&a,&b);
//                    c=a*b;
//                    printf("Mul = %d\n",c);
//                    break;
//             case 4:printf("Enter two numbers");
//                    scanf("%d%d",&a,&b);
//                    c=a/b;
//                    printf("Add = %f\n",c);
//                    break;
//             default:printf("\nEnter valid number\n");

//         }
//     }
       int bal=3000,pin=1234;
       int amount,cash=2000;
       int ch;
       int newpin;
       int newpin1,newpin2;
       while(1)
       {
              printf("\n1.Deposit\n2.withdrawl\n3.Balance Enquiry\n4.pin change\n");
              printf("\nEnter your choice\n");
              scanf("%d",&ch);
              switch(ch)
              {
                     case 1:printf("\nEnter the pin number\n");
                            scanf("%d",&newpin);
                            if(pin==newpin)
                            {
                                   printf("\nEnter the amount\n");
                                   scanf("%d",&amount);
                                   bal=bal+amount;
                                   printf("The update balance is %d\n",bal);
                            }
                            else
                            {
                                   printf("\nU entered the wrong pin number\n");
                            }
                            break;
                     case 2:printf("\nEnter the pin number\n");
                            scanf("%d",&newpin);
                            if(pin==newpin)
                            {
                                   printf("\nEnter the amount\n");
                                   scanf("%d",&amount);
                                   if(bal>=amount && amount%100==0)
                                   {
                                   bal=bal-amount;
                                   printf("The update balance is %d\n",bal);
                                   }
                                   else if(bal<amount)
                                   printf("Insufficient balance");
                                   else if(cash<amount)
                                   {
                                          bal=bal-cash;
                                          printf("The balance is %d\n",bal);
                                   }

                            }
                            else
                            {
                                   printf("\nU entered the wrong pin number\n");
                            }
                            break;
                     case 3:printf("\nEnter the pin number\n");
                            scanf("%d",&newpin);
                            if(pin==newpin)
                            {
                                   printf("The balance is %d\n",bal);
                            }
                            else
                            {
                                   printf("The password is incorrect\n");
                            }
                            break;
                     case 4:printf("\nChange the password\n");
                            printf("\nEnter the newpin1\n");
                            scanf("%d",&newpin1);
                            printf("\nEnter the confirm pin\n");
                            scanf("%d",&newpin2);
                            if(newpin1==newpin2 && newpin1!=pin && newpin2!=pin)
                            {
                                   pin=newpin1;
                                   printf("The password is succesfully changed\n");
                            }
                            else
                            {
                                   printf("\nYou entered the old pin or new pin and confirm pin are not same\n");
                            }
                            break;
                     default:printf("Invalid!! please enter the correctly from 1-4");
              }
       }
}