#include<stdio.h>
void add();
void sub();
void main()
{
  add();
  sub();
}
 void add()
 {
 int a,b,c;
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("Sum is %d\n",c);
 }
 void sub()
 {
   int a,b,c;
   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);
   c=a-b;
   printf("Sub is %d\n",c);
}
