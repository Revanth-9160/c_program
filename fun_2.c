#include<stdio.h>
void add();
void sub();
void mul();
int a,b,c;

void main()
{
 
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 add();
 }
 void add()
{
 
 c=a+b;
 printf("Sum is %d\n",c);
 mul();
 }
 void mul()
{
 
 c=a*b;
 printf("Mul is %d\n",c);
 sub();
 }
 void sub()
{
 
 c=a-b;
 printf("Sub is : %d\n",c);

 }
