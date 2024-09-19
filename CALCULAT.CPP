#include<stdio.h>
#include<conio.h>


void main()
{
int number1 ;
int number2 ;
float number3 ;
int add ;
int sub ;
int multiply ;
float divide ;

clrscr();

printf("Enter the number1 : ");
scanf("%d",&number1);
printf("Enter the number2 : ");
scanf("%d",&number2);

add = number1 + number2;

printf("Addition of num1 and num2 is : %d\n",add);

sub = number1 - number2;

printf("Subtract of num1 and num2 is : %d\n",sub);

multiply = number1 * number2 ;

printf("Multiply of num1 and num2 is : %d\n",multiply);


printf("Enter the number3 : ");
scanf("%f",&number3);

divide = number1 / number3 ;

printf("divide of num1 and num2 is : %.2f\n",divide);


getch();

}