#include<stdio.h>
void main()
{
int a,m,s,n;
printf("enter a number:");
scanf("%d",&a);
n=a%10;
while (a>0)
   {  m=a%10;
      printf("%d",m);
      s=s*10+m;
      a=a/10;
   }
if (n == m)
  printf("The first and last numbers are same:\n");
else
  printf("They are not same\n");

     
} 
